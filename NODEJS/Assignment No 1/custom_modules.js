exports.uppercase = function (str) {
    return str.toUpperCase(str);
}

exports.circumference = function (rad) {
    return (2 * Math.PI * rad);
}

exports.summ = function (num) {
    var temp = parseInt(num);
    let sum = 0;
    while (temp != 0) {
        let rem = parseInt(temp % 10);
        sum = sum + rem;
        temp = parseInt(temp / 10);
    }
    return sum;
}

exports.concat = function (str1, str2) {
    return str1 + " " + str2;
}

exports.factorial = function (num) {
    if (num < 0) {
        console.log("Sorry");
    } else if (num === 0) {
        console.log("its 1 for 1");
    } else {
        fact = 1;
        for (var i = 1; i <= num; i++) {
            fact *= i;
        }
    }
    return fact;
}

exports.area_of_rect = function (l, b) {
    return l * b;
}