#include "FileHandling.h"

FileHandling::FileHandling(int argc, char *argv[]) {
  if (argc != 2) std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;

  std::string fileName = argv[1];
  
  inFile.open(fileName);
  if (!inFile) std::cout << "Unable to open file " << fileName << std::endl;
  else std::cout << "Opened file " << fileName << std::endl;

  outFile.open(fileName + ".out");
  if (!outFile) std::cout << "Unable to open file " << fileName << ".out" << std::endl;
  else std::cout << "Opened file " << fileName << ".out" << std::endl;
}

FileHandling::~FileHandling() {
  inFile.close();
  outFile.close();
}