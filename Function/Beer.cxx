#ifndef BEER_CXX
#define BEER_CXX

#include "Beer.h"
#include <iostream>
namespace example {

  Beer::Beer(int age) : _age(age)
  {}

  void Beer::Speak() const
  {
    std::cout << "This beer is " << _age << " years old!" << std::endl;
  }


}

#endif
