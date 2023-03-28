let express = require('express');
let fs = require('fs');
let app = express();
let port = 3000;

app.use(express.urlencoded({ extended: true }));

app.get('/', (req, res) => {
    res.sendFile(__dirname + '/html/A.1.html');
});

app.post('/add', (req, res) => {
    let file1 = req.body.file1;
    let file2 = req.body.file2;
    fs.readFile(file1, (err, data) => {
        if (err) throw err;
        fs.appendFile(file2, data, (err) => {
            if (err) throw err;
            res.send("File appended");
        })
    })
});

app.listen(port, () => {
    console.log(`Localhost started at http://localhost:${port}`);
});