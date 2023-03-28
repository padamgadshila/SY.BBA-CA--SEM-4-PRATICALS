var up = require('./custom_modules');
var input = require('prompt-sync')();

var name = input("Enter a string: ");
console.log("The string converted to uppercase");
console.log(up.uppercase(name));