/**
 * \file Stout.h
 *
 * \ingroup Dependent
 * 
 * \brief Class def header for a class Stout
 *
 * @author kazuhiro
 */

/** \addtogroup Dependent

    @{*/
#ifndef STOUT_H
#define STOUT_H

#include "Function/Beer.h"

namespace example {
  /**
     \class Stout
     Stout class inherits from Beer. It adds darkness.
  */
  class Stout : public Beer{
    
  public:
    
    /// Default constructor
    Stout(int year=1,double darkness=1);
    
    /// Default destructor
    ~Stout(){}

    double _darkness;
    
  };
}

#endif
/** @} */ // end of doxygen group 

