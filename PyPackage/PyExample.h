/**
 * \file PyExample.h
 *
 * \ingroup Example
 * 
 * \brief Class def header for a class PyExample
 *
 * @author kazuhiro
 */

/** \addtogroup Example

    @{*/
#ifndef EXAMPLE_PYEXAMPLE_H
#define EXAMPLE_PYEXAMPLE_H

struct _object;
typedef _object PyObject;

#ifndef __CINT__
// You have to hide native Python header include from CINT
#include "Python.h"
#endif

#include <vector>
#include <string>

namespace example {
  /**
     \class PyExample
     An example class to convert std::vector<string> into a Python list
  */
  class PyExample {
    
  public:
    
    /// Default constructor
    PyExample() {}
    
    /// Default destructor
    virtual ~PyExample(){}

    PyObject* Convert(const std::vector<std::string>& str_array) const;

  };
  
}
#endif
/** @} */ // end of doxygen group 

