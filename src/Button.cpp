// Marcus Hershberger | 8 Jan 2020

// Button class implementation
// Inherits from HTMLelement
#include "Button.h"
#include <string>
using namespace std;

Button::Button() {
  content = "";
  id = "";
  onClick = "";
  type = "button";
}

Button::Button(string content_) {
  content = content_;
  id = "";
  onClick = "";
  type = "button";
}
