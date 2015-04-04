#include <iostream>

class IceCreamFactory {
public:
  IceCreamFactory(); // default
  // IceCreamFactory() = default; // will create an empty default
  // constructor.
  IceCreamFactory(int nLines);
private:
  int num_assembly_lines_;
};

IceCreamFactory::IceCreamFactory(int nL):
  num_assembly_lines_(nL) { }

IceCreamFactory::IceCreamFactory() {
  std::cout << "Creating default IceCreamFactory" << std::endl;
}

int main() {
  IceCreamFactory f(3);
  IceCreamFactory a[7];
}


