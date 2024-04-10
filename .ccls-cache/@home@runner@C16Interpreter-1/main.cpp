#include <iostream>

#include "ProcessCase.h"

int main(int argc, char *argv[]) {
  ProcessCase processCase (argc, argv);

  processCase.getNumberOfCases(); std::cout << "getNumberOfCases()" << std::endl;
  processCase.initializeCase(); std::cout << "initializeCase()" << std::endl;
  processCase.getInstructions(); std::cout << "getInstructions()" << std::endl;
  processCase.printInstructions();
  processCase.processInput(); std::cout << "processInput()" << std::endl;
  processCase.printNumberOfInstructions(); std::cout << "printNumberOfInstructions()" << std::endl;

  return 0;
}