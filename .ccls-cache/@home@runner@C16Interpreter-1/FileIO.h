#ifndef FILE_IO_H
#define FILE_IO_H

#include "FileHandling.h"

class FileIO : public FileHandling {

protected:
  int numCases;

  static const int NUM_REGISTERS = 10;
  int registers[NUM_REGISTERS];

  static const int NUM_MEMORY_LOCATIONS = 1000;
  int memory[NUM_MEMORY_LOCATIONS];

public:
  FileIO(int argc, char **argv) : FileHandling(argc, argv) {};
  ~FileIO(void) {};

  void initializeCase (void);
};



#endif