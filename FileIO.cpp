#include "FileIO.h"

void FileIO::initializeCase () {
  registers.clear();
  registers.resize(NUM_REGISTERS);

  memory.clear();

  NumberOfInstructions = 0;
}

void FileIO::getNumberOfCases() {
  std::string line;
  getline(inFile, line);
  numberOfCases = stoi(line);
  getline(inFile, line);
}
void FileIO::getInstructions () {
  while (true) {
    std::string line;
    getline(inFile, line);
    if (line.empty()) {
      break;
    }
    else {
      memory.push_back(stoi(line));
    }
  }
}
void FileIO::printInstructions () {
  std::cout << "Num  Instruction" << std::endl;
  std::cout << "---  -----------" << std::endl;
  for (auto it = memory.begin(); it != memory.end(); it++) {
    std::cout << std::setw(3) << it - memory.begin() << "  ";
    std::cout << std::setw(11) << *it << std::endl;
  }
}
void FileIO::printNumberOfInstructions() {
  std::cout << "Number of instructions: " << NumberOfInstructions << std::endl;
}
void FileIO::printNumberOfInstructions(std::ofstream out) {
  out << "Number of instructions: " << NumberOfInstructions << std::endl;
}