var merge = require('./custom_modules');
var input = require('prompt-sync')();

var fname = input("Enter your first name: ");
var lname = input("Enter your last name: ");
console.log("names after concating are");
console.log(merge.concat(fname, lname));