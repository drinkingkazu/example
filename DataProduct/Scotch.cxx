#ifndef SCOTCH_CXX
#define SCOTCH_CXX

#include "Scotch.h"
#include <iostream>
#include <TFile.h>
#include <TTree.h>
#include <TRandom.h>

namespace example {

  Scotch::Scotch(const double age, const double price)
    : _age(age)
    , _price(price)
  {}

  void Scotch::Speak() const
  {
    std::cout << "This scotch is " << _age 
	      << " years old and costs " << _price 
	      << " dollars." << std::endl;
  }

  void Scotch::ShipScotch(const std::string file_name)
  {
    // Create a file
    auto fout = TFile::Open(file_name.c_str(),"RECREATE");
    TTree  tree("tree","");
    Scotch data;
    // Create a TTree branch for this data product
    tree.Branch("scotch",data.GetName(),&data);

    size_t n_scotch = 1e6;
    std::cout << "Shipping " << n_scotch << " scotch bottles to TTree..." << std::endl;
    // Fill data for fun
    for(size_t i=0; i<n_scotch; ++i) {
      
      data._age = i%100;
      data._price = gRandom->Gaus((data._age)*10,(data._age));
      if(data._price<0) data._price *= -1;

      tree.Fill(); // Fill TTree
    }
    std::cout << "Finished! Closing a file " << file_name.c_str() << std::endl;

    tree.Write();  // Write to an output file
    fout->Close(); // Close file
  }

}

#endif
