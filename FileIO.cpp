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