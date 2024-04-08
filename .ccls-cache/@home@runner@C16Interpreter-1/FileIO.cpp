#include "FileIO.h"

void FileIO::initializeCase () {
  for (int i = 0; i < NUM_REGISTERS; i++) {
    registers[i] = 0;
  }

  for (int i = 0; i < NUM_MEMORY_LOCATIONS; i++) {
    memory[i] = 0;
  }

  NumberOfInstructions = 0;
}

void FileIO::getNumberOfCases() {
  inFile >> numberOfCases;
}
void FileIO::getInstructions () {
  int instructionIndex = 0;
  while (true) {
    std::string line;
    getline(inFile, line);
    if (line.empty()) {
      break;
    }
    else {
      memory[instructionIndex] = std::stoi(line);
      instructionIndex++;
    }
  }
}



void FileIO::printNumberOfInstructions() {
  std::cout << "Number of instructions: " << NumberOfInstructions << std::endl;
}
void FileIO::printNumberOfInstructions(std::ofstream out) {
  out << "Number of instructions: " << NumberOfInstructions << std::endl;
}