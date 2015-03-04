import sys
from ROOT import gSystem, TCanvas, TH2D
gSystem.Load("libExample_DataProduct")
from ROOT import example

print
print "Making a scotch..."
myscotch = example.Scotch()
myscotch.Speak()

print
print "Let's make many scotches in TTree..."
myscotch.ShipScotch("trial.root")

print
print "Let's now open a file, draw price vs. age distribution!"
from ROOT import TChain
ch=TChain("tree")
ch.AddFile("trial.root")
c=TCanvas("c","",600,500)
c.SetLogz(1)
c.SetLeftMargin(0.13)
c.SetRightMargin(0.08)
c.SetBottomMargin(0.13)
h=TH2D("hAgeVsPrice","Scotch Age vs. Price; Age [yaer]; Price [USD]",
       100,0,100,
       100,0,1000)
h.SetTitleSize(0.05,"XY")
h.SetTitleFont(22,"XY")
h.SetLabelSize(0.05,"XY")
h.SetLabelFont(22,"XY")
h.SetTitleOffset(1.3,"Y")
h.SetTitleOffset(1.2,"X")
ch.Draw("_price:_age>>hAgeVsPrice","","COLZ")
c.Update()
sys.stdin.readline()

