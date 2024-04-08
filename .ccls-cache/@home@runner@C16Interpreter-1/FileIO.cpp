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
  for (auto it = memory.begin(); it != memory.end(); it++) {
    std::cout << *it << std::endl;
  }
}
void FileIO::printNumberOfInstructions() {
  std::cout << "Number of instructions: " << NumberOfInstructions << std::endl;
}
void FileIO::printNumberOfInstructions(std::ofstream out) {
  out << "Number of instructions: " << NumberOfInstructions << std::endl;
}