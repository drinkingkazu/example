import sys, ROOT
ROOT.gSystem.Load("libExample_Empty")
from ROOT import sample

try:

    print "PyROOT recognized your class %s" % str(sample)

except NameError:

    print "Failed importing EmptyExample..."

sys.exit(0)

