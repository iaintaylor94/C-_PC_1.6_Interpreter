#ifndef PROCESS_CASE_H
#define PROCESS_CASE_H

#include "FileIO.h"

class ProcessCase : public FileIO {
  void printProgramState (void);


public:
  ProcessCase (int argc, char **argv) : FileIO(argc, argv) {};
  ~ProcessCase() {};

  void processInput(void);

};




#endif