# cpp-html

NOTES (Same as notes.pdf)

The Output Goal
An HTML page with two columns, with a button in the left-side column. When the button is pressed, a chart will appear in the right-side column.

The result of running the program (written in C++) is HTML code that does what is specified by the output goal.
Right now, the program writes this code to an HTML file, but the writing logic is entirely separate from all other logic, so this could easily be changed. Since was not prepared for a specific server, it made most sense to write the code into a file.
The chart code was taken from chart.js (https://www.chartjs.org/), an open source method of creating charts on webpages using HTML5 and JS. 

There are bits and pieces that could definitely be refined if this were a full project, though for the purpose of this exercise, everything seems to work. The Canvas class used does not utilize the actual HTML canvas tag because canvas tags cannot hold nested content, which seems like they would be useless for holding multiple columns. Instead, divs were used, and the ‘canvas’ can hold any specified number of columns. There is also a bit of code duplication that could be cleaned up a bit. Comments could be more descriptive. Additionally, the Chart class deals with the inclusion of the JS code, but this should probably be separated into a different class, because the addition of a second chart to the page would result in JS errors in the browser because of multiple elements with the same id’s and multiple declarations of the same JS variable.Lastly, the HTML must be requested each time the code is needed. If a change is made to any of the object properties, the HTML must be requested from that class again. This is where a full-scale project would utilize an MVC architecture.

Compiled using g++ 8.3.0 on Kubuntu 19.04

Commands for compiling and running:
	
	$ g++ *.cpp -o out
	
	$ ./out
