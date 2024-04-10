#include "ProcessCase.h"

void ProcessCase::printProgramState (void) {
  std::cout << left << " " << center << " " << right;
  std::cout << " " << std::setw(4) << registers[0];
  std::cout << " " << std::setw(4) << registers[1];
  std::cout << " " << std::setw(4) << registers[2];
  std::cout << " " << std::setw(4) << registers[3];
  std::cout << " " << std::setw(4) << registers[4];
  std::cout << " " << std::setw(4) << registers[5];
  std::cout << " " << std::setw(4) << registers[6];
  std::cout << " " << std::setw(4) << registers[7];
  std::cout << " " << std::setw(4) << registers[8];
  std::cout << " " << std::setw(4) << registers[9] << std::endl;
}

void ProcessCase::processInput(void) {

  std::cout << "L C R    0    1    2    3    4    5    6    7    8    9" << std::endl;
  std::cout << "- - - ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout << "0 0 0    0    0    0    0    0    0    0    0    0    0" << std::endl;

  int i = 0;
  for (auto it = memory.begin(); it != memory.end(); it++) {
    if (i == 25) break;
    i++;
    
    int temp = *it;
    right = temp % 10; temp /= 10;
    center = temp % 10; temp /= 10;
    left = temp % 10; temp /= 10;
    
    switch (left) {
      case 0: // GOTO location in CENTER unless register(RIGHT) contains 0
        if (registers[right] != 0) {
          it = memory.begin() + registers[center] - 1;
        }
        NumberOfInstructions++;
        break;
      case 1: // HALT
        if (center == 0 && right == 0) {
          NumberOfInstructions++;

          printProgramState ();
          std::cout << "Halting ...." << std::endl;
          return;
        }
        break;
      case 2: // Set register[center] to to right (0 <= 9)
        registers[center] = right;
        NumberOfInstructions++;
        break;
      case 3: // Add right to register[center]
        registers[center] += right;
        NumberOfInstructions++;
        break;
      case 4: // Multiply register[center] by right
        registers[center] *= right;
        NumberOfInstructions++;
        break;
      case 5: // Set register[center] to register[right]
        registers[center] = registers[right];
        NumberOfInstructions++;
        break;
      case 6: // Add the value of register[right] to register[center]
        registers[center] += registers[right];
        NumberOfInstructions++;
        break;
      case 7: // Multiply the value of register[center] by register[right]
        registers[center] *= registers[right];
        NumberOfInstructions++;
        break;
      case 8: // Set register[center] to the value in RAM whose address is in register[right]
        registers[center] = memory[registers[right]];
        NumberOfInstructions++;
        break;
      case 9: // Set the value in RAM whose address is in register[right] to register[center]
        memory[registers[right]] = registers[center] %= 1000;
        NumberOfInstructions++;
        break;
      default:
        break; 
    }

    for (auto it = registers.begin(); it != registers.end(); it++) {
      *it %= 1000;
    }

    printProgramState ();
    
  }
}