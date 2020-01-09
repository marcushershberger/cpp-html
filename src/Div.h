// Marcus Hershberger | 8 Jan 2020

// Div class header file
// Inherits from HTMLelement
#ifndef _Div_h_
#define _Div_h_

#include <string>
#include "HTMLelement.h"
using namespace std;

class Div : public HTMLelement {
  public:

    Div();

    Div(string content_);
};

#endif
