// Marcus Hershberger | 8 Jan 2020

// Chart class implementation file
// Inherits from HTMLelement
#include "Chart.h"
#include <string>
#include <algorithm>
using namespace std;

Chart::Chart(string id_, string label_, string chartType_) {
  source = "https://cdn.jsdelivr.net/npm/chart.js@2.9.3/dist/Chart.bundle.min.js";
  id = id_;
  label = label_;
  chartType = chartType_;
  type = "canvas";
}

// Add an X value to the chart
void Chart::addXVal(int val_) {
  xVals.push_back(val_);
  sort(xVals.begin(), xVals.end());
}

// Add a Y value to the chart
void Chart::addYVal(int val_) {
  yVals.push_back(val_);
  sort(yVals.begin(), yVals.end());
}

// Output the neccessary JS for the chart to render (specific to chart.js)
string Chart::buildScript() {
  string js = "<script>";
  js += "var ctx=document.getElementById('" + id + "').getContext('2d');";
  js += "var chart=new Chart(ctx,{type:'" + chartType + "',data:{labels:[";
  string comma = "";
  // Iterate through the X values
  for(int x : xVals) {
    js += comma + to_string(x);
    comma = ",";
  }
  comma = "";
  js +="],datasets:[{label:'" + label + "',data:[";
  // Iterate through the Y values
  for(int y: yVals) {
    js += comma + to_string(y);
    comma = ",";
  }
  js += "]}]},options:{}});</script>";
  return js;
}

// Override HTMLelement's outputTag to include the chart.js source and the built script
string Chart::outputTag() {
  return sourceScript() + "<" + getType() + " id='" + getId() + "' onclick='" + getOnClick() + "' style='" + getStyles() + "'>" + getContent() + "</" + getType() + ">" + buildScript();
}

// Getter for the source url of chart.js
string Chart::sourceScript() {
  return "<script src='https://cdn.jsdelivr.net/npm/chart.js@2.9.3/dist/Chart.bundle.min.js'></script>";
}
