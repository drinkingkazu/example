#ifndef EXAMPLE_MYFUNCTIONS_CXX
#define EXAMPLE_MYFUNCTIONS_CXX

#include <iostream>
#include "Beer.h"

namespace example {

  void hello_world()
  {
    std::cout << "Hello world!" << std::endl;
  }

  Beer Brew(const int age)
  {
    Beer result(age);
    return result;
  }
}
#endif
