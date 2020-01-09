// Marcus Hershberger | 8 Jan 2020

// This code creates several HTML elements using classes that define them.
// A button is created that will display a chart when clicked,
// and a chart is also created and data points are added to it.
// The resulting HTML is written to 'chart.html'.

#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include "Button.h"
#include "Div.h"
#include "Chart.h"
#include "Canvas.h"
using namespace std;

int main() {
  // Create a canvas with 2 columns.
  Canvas canvas(2);

  // Create a defult button element.
  Button btn;
  // Set properties and content of the button
  btn.setContent("Show Chart");
  btn.setStyle("display:block");
  btn.setStyle("margin:auto");
  btn.setStyle("margin-top:100px");
  btn.setOnClick("document.getElementById(\"chart\").style.display = \"block\";");

  // Create a default Chart element
  Chart chart;
  // Add X Values for the chart;
  chart.addXVal(1);
  chart.addXVal(2);
  chart.addXVal(3);
  // Add Y values for the chart;
  chart.addYVal(5);
  chart.addYVal(15);
  chart.addYVal(10);
  // Hide the chart
  chart.setStyle("display:none");

  // Add btn to the 1st column (index 0) of the canvas
  canvas.setContent(btn, 0);
  // Add chart to the 2nd column (index 1) of the canvas
  canvas.setContent(chart.outputTag(), 1);
  // charthtml now contains the entire canvas code
  string charthtml = canvas.outputTag();

  // Write the resulting HTML code to the file 'chart.html'
  ofstream htmlFile;
  htmlFile.open ("chart.html");
  htmlFile << charthtml;
  htmlFile.close();

  return EXIT_SUCCESS;
}
