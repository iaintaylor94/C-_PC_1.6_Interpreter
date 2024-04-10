#ifndef FILE_IO_H
#define FILE_IO_H

#include <iomanip>
#include <vector>
#include <string>

#include "FileHandling.h"

class FileIO : public FileHandling {

protected:
  int numberOfCases;

  static const int NUM_REGISTERS = 10;
  std::vector<int> registers;

  static const int NUM_MEMORY_LOCATIONS = 1000;
  std::vector<int> memory;

  int NumberOfInstructions;

public:
  FileIO(int argc, char **argv) : FileHandling(argc, argv) {};
  ~FileIO(void) {};

  void initializeCase (void);

  void getNumberOfCases(void);
  void getInstructions(void);
  void printInstructions(void);

  void printNumberOfInstructions(void);
  void printNumberOfInstructions(std::ofstream out);
};



#endif