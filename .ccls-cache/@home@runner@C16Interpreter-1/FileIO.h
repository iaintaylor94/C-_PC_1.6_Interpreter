#ifndef FILE_IO_H
#define FILE_IO_H

#include "FileHandling.h"

class FileIO : public FileHandling {

protected:
  int numberOfCases;

  static const int NUM_REGISTERS = 10;
  int registers[NUM_REGISTERS];

  static const int NUM_MEMORY_LOCATIONS = 1000;
  int memory[NUM_MEMORY_LOCATIONS];

  int NumberOfInstructions;

public:
  FileIO(int argc, char **argv) : FileHandling(argc, argv) {};
  ~FileIO(void) {};

  void initializeCase (void);

  void getNumberOfCases(void);
  void getInstructions(void);

  void printNumberOfInstructions(void);
  void printNumberOfInstructions(std::ofstream out);
};



#endif