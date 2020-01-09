// Marcus Hershberger | 8 Jan 2020

// HTMLelement header file
#ifndef _HTMLelement_h_
#define _HTMLelement_h_

#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

class HTMLelement {
  public:
    // MODIFICATION MEMBER FUNCTIONS
    void setId(string newId_);

    void removeId();

    void setStyle(string style_);

    void setContent(string newContent_);

    void setContent(HTMLelement el_);

    void appendContent(string newContent_);

    void appendContent(HTMLelement el_);

    void prependContent(string newContent_);

    void prependContent(HTMLelement el_);

    void clearContent();

    void setOnClick(string newJS_);

    void clearOnClick();


    // Returns final output of HTML tag used for display.
    string outputTag();

  protected:

    // DATA MEMBERS

    string type;

    //string* cssProperties;

    vector <string> cssProperties;

    string* classList;

    string id;

    string onClick;

    string content;


    // GETTERS FOR DATA MEMBERS
    string getType();

    string getId();

    string getOnClick();

    string getContent();

    // HELPER FUNCTIONS

    string getStyles();
};

#endif
