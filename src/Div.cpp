// Marcus Hershberger | 8 Jan 2020

// Div class implementation file
// Inherits from HTMLelement
#include "Div.h"
#include <string>
using namespace std;

Div::Div() {
  content = "";
  id = "";
  onClick = "";
  type = "div";
}

Div::Div(string content_) {
  content = content_;
  id = "";
  onClick = "";
  type = "div";
}
