#include <iostream>

#include "FileIO.h"

int main(int argc, char *argv[]) {
  FileIO fileIO (argc, argv);

  fileIO.getNumberOfCases();
  fileIO.initializeCase();
  fileIO.getInstructions();
  fileIO.printInstructions();
  

  return 0;
}