#ifndef FILE_HANDLING_H
#define FILE_HANDLING_H

#include <fstream>

class FileHandling {

protected :
  std::ifstream inFile;
  std::ofstream outFile;

public:
  FileHandling(int, char **);
  ~FileHandling();

};
#endif