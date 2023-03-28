var area = require('./custom_modules');
var input = require('prompt-sync')();

var len = parseInt(input("Enter the length: "));
var brth = parseInt(input("Enter the breadth: "));

console.log("The area of the rectangle = " + area.area_of_rect(len, brth));