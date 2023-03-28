let express = require('express');
let upload = require('express-fileupload');
let fs = require('fs');
let app = express();

app.use(upload());
app.use(express.urlencoded({ extended: true }));

app.get('/', (req, res) => {
    res.sendFile(__dirname + '/html/B.1.html');
})

app.post('/up', (req, res) => {
    let file = req.files.filename;
    filename = file.name
    file.mv('./up/' + filename, (err) => {
        if (err) throw err;
        res.send("File uploaded");
    })
})
app.listen(3000, () => {
    console.log(`Localhost started at http://localhost:3000`);
});