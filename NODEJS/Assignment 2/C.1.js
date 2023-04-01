let fs = require('fs');

fs.readFile('file1.txt', (err, data) => {
    if (err) throw err;
    let text = data.toString();
    let lines = text.split('\n');
    console.log('Total number of lines are: ' + lines.length);
});