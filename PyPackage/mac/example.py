import sys
import ROOT
from ROOT import gSystem
gSystem.Load("libExample_PyPackage")
from ROOT import example

print "Instantiate PyExample class object..."
mypy = example.PyExample()

print "Make std::vector<std::string>..."
str_vector = ROOT.std.vector("string")()
str_vector.push_back("aho")
str_vector.push_back("boke")
print "Instance:",str_vector
print "Converted instance:",mypy.Convert(str_vector)

