#include <iostream>

#define STRINGIFY(tok) #tok
#define STR(tok) STRINGIFY(tok) // macro expansion
// Not good practice unless you use a specific process; use it sparingly

int main(){
  std::cout << "Hello " << STR(NAME) << std::endl;
  return 0;
}
