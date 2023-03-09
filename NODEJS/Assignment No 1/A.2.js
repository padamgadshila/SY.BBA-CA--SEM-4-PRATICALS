var summ = require('./custom_modules');
var input = require('prompt-sync')();

var num = parseInt(input("Enter a number: "));
console.log("the sum of the number " + num + " is")
console.log(summ.summ(num));