var circle = require('./custom_modules.js');
var input = require('prompt-sync')();


var radius = input("Enter a radius: ");
console.log("the area of circle = " + circle.area_of_circle(radius));
console.log("the circumference of circle = " + circle.circumference(radius));
