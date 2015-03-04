/**
 * \file Beer.h
 *
 * \ingroup Function
 * 
 * \brief Class def header for a class Beer
 *
 * @author kazuhiro
 */

/** \addtogroup Function

    @{*/
#ifndef BEER_H
#define BEER_H

namespace example {

  /**
     \class Beer
     Example C++ class for LArLite tutorial
  */
  class Beer{
    
  public:
    
    /// Default constructor
    Beer(int age=0);
    
    /// Default destructor
    ~Beer(){}

    /// Announce age
    void Speak() const;

    int _age;
    
  };
}
#endif
/** @} */ // end of doxygen group 

