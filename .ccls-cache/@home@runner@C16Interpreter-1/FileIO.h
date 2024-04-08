#ifndef FILE_IO_H
#define FILE_IO_H

#include <vector>
#include <string>

#include "FileHandling.h"

class FileIO : public FileHandling {

protected:
  int numberOfCases;

  static const int NUM_REGISTERS = 10;
  std::vector<std::string> registers;

  static const int NUM_MEMORY_LOCATIONS = 1000;
  std::vector<std::string> memory;

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