// Marcus Hershberger | 8 Jan 2020

// Chart class header file
// Inherits from HTMLelement
#ifndef _Chart_h_
#define _Chart_h_

#include <string>
#include "HTMLelement.h"
using namespace std;

class Chart : public HTMLelement {
  public:

    Chart(string id_ = "chart", string label_ = "Chart", string chartType_ = "line");

    void addXVal(int val_);

    void addYVal(int val_);

    string outputTag();

  private:

    string source;

    string chartType;

    string label;

    vector <int> xVals;

    vector <int> yVals;

    string buildScript();

    string sourceScript();
};

#endif
