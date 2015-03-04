/**
 * \file Scotch.h
 *
 * \ingroup DataProduct
 * 
 * \brief Class def header for a class Scotch
 *
 * @author kazuhiro
 */

/** \addtogroup DataProduct

    @{*/
#ifndef SCOTCH_H
#define SCOTCH_H

#include "TObject.h"

namespace example {
  /**
     \class Scotch
     Example data product class Scotch
  */
  class Scotch : public TObject{
    
  public:
    
    /// Default constructor
    Scotch(const double age=10, const double price=1000);
    
    /// Default destructor
    ~Scotch(){}

    /// Make it speak
    void Speak() const;

    double   _age; ///< How long have I slept
    double _price; ///< I am not cheap

    /**
       Simple function to demonstrate how one can store data product in a TTree. \n
       This function creates a TTree named "tree", in a ROOT file with a specified \n
       name in the function argument. The TTree will contain 10 years worth of Scotch. \n
    */
    void ShipScotch(const std::string file_name);

    ClassDef(Scotch,1)
  };
}

#endif
/** @} */ // end of doxygen group 

