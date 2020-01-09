// Marcus Hershberger | 8 Jan 2020

// HTMLelement class implementation
#include <cstdlib>
#include <string>
#include <vector>
#include "HTMLelement.h"
using namespace std;

    void HTMLelement::setId(string newId_) {
      id = newId_;
    }

    void HTMLelement::removeId() {
      id = "";
    }

    void HTMLelement::setStyle(string style_) {
      cssProperties.push_back(style_);
    }

    void HTMLelement::setContent(string newContent_) {
      content = newContent_;
    }

    void HTMLelement::setContent(HTMLelement el_) {
      content = el_.outputTag();
    }

    void HTMLelement::appendContent(string newContent_) {
      content += newContent_;
    }

    void HTMLelement::appendContent(HTMLelement el_) {
      content += el_.outputTag();
    }

    void HTMLelement::prependContent(string newContent_) {
      content = newContent_ + getContent();
    }

    void HTMLelement::prependContent(HTMLelement el_) {
      content = el_.outputTag() + getContent();
    }

    void HTMLelement::clearContent() {
      content = "";
    }

    void HTMLelement::setOnClick(string newJS_) {
      onClick = newJS_;
    }

    void HTMLelement::clearOnClick() {
      onClick = "";
    }


    // Returns final output of HTML tag used for display.
    string HTMLelement::outputTag() {
      return "<" + getType() + " id='" + getId() + "' onclick='" + getOnClick() + "' style='" + getStyles() + "'>" + getContent() + "</" + getType() + ">";
    }

    // GETTERS FOR DATA MEMBERS
    string HTMLelement::getType() {
      return type;
    }

    string HTMLelement::getId() {
      return id;
    }

    string HTMLelement::getOnClick() {
      return onClick;
    }

    string HTMLelement::getContent() {
      return content;
    }

    string HTMLelement::getStyles() {
      string styleList = "";
      for(string prop : cssProperties) {
        styleList += prop + ";";
      }
      return styleList;
    }
