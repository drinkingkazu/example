import sys
from ROOT import gSystem
gSystem.Load("libExample_Function")
from ROOT import example

print
print "Creating Beer by myself..."
mybeer = example.Beer(5)
mybeer.Speak()

print
print "Creating Beer using Brew()..."
hisbeer = example.Brew(10)
hisbeer.Speak()

print
print "Greeting to the world..."
example.hello_world()
