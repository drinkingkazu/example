import sys
from ROOT import gSystem
gSystem.Load("libExample_Dependent")
from ROOT import example

print
print "Making a stout"
s=example.Stout()
s.Speak()
print "Stout has a darkness:",s._darkness
