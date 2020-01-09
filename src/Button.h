// Marcus Hershberger | 8 Jan 2020

// Button class header file
// Inherits from HTMLelement
#ifndef _Button_h_
#define _Button_h_

#include <string>
#include "HTMLelement.h"
using namespace std;

class Button : public HTMLelement {
  public:

    Button();

    Button(string content_);
};

#endif
