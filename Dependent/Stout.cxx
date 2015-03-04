#ifndef STOUT_CXX
#define STOUT_CXX

#include "Stout.h"

namespace example {

  Stout::Stout(int year, double darkness) : Beer(year)
					  , _darkness(darkness)
  {}

}
#endif
