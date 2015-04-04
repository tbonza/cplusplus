#include "ImageServer.h"
#include <stdexcept>

// example of a namespace alias
namespace FS = LMFocusStack;

FS::ImageServer::ImageServer(int argc, char ** argv) {
  throw std::invalid_argument("Settings File Not Specified");
}

int FS::ImageServer::StartServer() {
	return 0;
}

