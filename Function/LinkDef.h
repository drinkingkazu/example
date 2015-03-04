//
// cint script to generate libraries
// Declaire namespace & classes you defined
// #pragma statement: order matters! Google it ;)
//

#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ namespace example+;
#pragma link C++ class     example::Beer+;
#pragma link C++ function  example::hello_world()+;
#pragma link C++ function  example::Brew(const int)+;
//ADD_NEW_CLASS ... do not change this line
#endif

