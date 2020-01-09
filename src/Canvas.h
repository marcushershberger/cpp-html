// Marcus Hershberger | 8 Jan 2020

// Canvas class header file
// Inherits from HTMLelement
#ifndef _Canvas_h_
#define _Canvas_h_

#include <string>
#include <vector>
#include "HTMLelement.h"
#define DEFAULT 1
using namespace std;

class Canvas : public HTMLelement {
  public:

    Canvas(unsigned int columns_ = 1);

    void fillColumns(unsigned int columns_);

    void setCanvasStyle();

    string outputTag();

    void setContent(HTMLelement el_, unsigned int index_ = 0);

    void setContent(string el_, unsigned int index_ = 0);

  private:
    // Array to hold the contents of each column
    HTMLelement* columnContents;

    unsigned int columns;
};

#endif
