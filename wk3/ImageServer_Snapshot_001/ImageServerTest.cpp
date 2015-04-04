#include <iostream>
#include "ImageServer.h"

// PManandhar note: not preferred, used for demo
// or short files
using namespace LMFocusStack;

int main(int argc, char ** argv) {
  
  std::cout << "argc is  " << argc << std::endl;
  for (uint i = 0; i < argc; ++i) 
  std:cout << i << ": " << argv[i] << std::endl;
  
  try {
    ImageServer server(argc, argv);
  } catch(...) {
    std::cout << "Oh no!!!";
    throw;
  }


  return 0;

}

