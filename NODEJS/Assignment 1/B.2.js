var fact = require('./custom_modules');
var input = require('prompt-sync')();

var no = parseInt(input("Enter a number: "));
console.log("The factorial of " + no + " is");
console.log(fact.factorial(no));