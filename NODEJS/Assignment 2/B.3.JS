let fs = require('fs');

fs.stat('file1.txt', (err, stats) => {
    if (err) throw err;
    let status = stats.isFile();

   console.log(status ? 'is a file' : 'is not a file');

});

fs.open('file1.txt', 'r+', (err, fd) => {
    if (err) throw err;
    console.log('File opened');
    fs.ftruncate(fd, 7, (err) => {
        if (err) throw err;
        console.log('File turncated after 7 bytes');
        console.log('Reading the same file');
        fs.readFile(fd, (err, data) => {
            if (err) throw err;

            if (data.length > 0) {
                console.log('The contents of the file are :');
                console.log(data.toString());
            }

            fs.close(fd, (err) => {
                if (err) throw err;
                console.log('closed the file');
            })
        });
    });
});
