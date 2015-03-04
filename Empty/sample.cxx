#ifndef LARLITE_EMPTYEXAMPLE_SAMPLE_CXX
#define LARLITE_EMPTYEXAMPLE_SAMPLE_CXX

#include "sample.h"
#include <iostream>

namespace example {
  void sample::Greet() const
  { std::cout << " Hello! " << std::endl; }
}
#endif
