#ifndef EXAMPLE_PYEXAMPLE_CXX
#define EXAMPLE_PYEXAMPLE_CXX

#include "PyExample.h"
#include <iostream>
#include <exception>
namespace example {

  PyObject* PyExample::Convert(const std::vector<std::string>& str_array) const
  {
    PyObject* pvec = PyList_New(str_array.size());

    for(size_t i=0; i<str_array.size(); ++i) {

      if(PyList_SetItem(pvec, i, PyString_FromString(str_array[i].c_str()))) {

	Py_DECREF(pvec);
	std::cerr<<"<<Convert>> failed!"<<std::endl;
	throw std::exception();
      }
    }
    return pvec;
  }

}
#endif
