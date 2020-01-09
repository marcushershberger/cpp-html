// Marcus Hershberger | 8 Jan 2020

// Canvas class implementation file
// Inherits from HTMLelement
#include "Canvas.h"
#include "Div.h"
#include <string>
using namespace std;

Canvas::Canvas(unsigned int columns_) {
  // If provided column count is less than 1, set column count to 1
  columns = columns_ > 0 ? columns_ : 1;
  columnContents = new HTMLelement[columns];
  type = "div";
  setCanvasStyle();
  fillColumns(columns);
}

// Create appropriate amount of divs to represent columns
void Canvas::fillColumns(unsigned int columns_) {
  int width = 100 / columns_;
  for (int i = 0; i < columns_; ++i) {
    columnContents[i] = Div();
    columnContents[i].setStyle("width:" + to_string(width) + "%");
    columnContents[i].setStyle("height:100%");
    columnContents[i].setStyle("float:left");

  }
}

// Override HTMLelement's outputTag to include contents stored in each array index
string Canvas::outputTag() {
  string html = "<div style='" + getStyles() + "'>";
  for (int c = 0; c < columns; ++c) {
    html += columnContents[c].outputTag();
  }
  return html + "</div>";
}

// Make sure canvas fills window
void Canvas::setCanvasStyle() {
  setStyle("width:100%");
  setStyle("height:1vh");
  setStyle("margin:auto");
}

void Canvas::setContent(HTMLelement el_, unsigned int index_) {
  unsigned int changedIndex = index_ < columns ? index_ : columns - 1;
  columnContents[changedIndex].setContent(el_);
}

void Canvas::setContent(string el_, unsigned int index_) {
  unsigned int changedIndex = index_ < columns ? index_ : columns - 1;
  columnContents[changedIndex].setContent(el_);
}
