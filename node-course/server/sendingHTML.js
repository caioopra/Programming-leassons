const http = require('http');
const fs = require('fs');

const server = http.createServer((req, res) => {
    console.log(req.url, req.method)

    res.setHeader("Content-Type", "text/html");

    let path = "./views/";
    switch(req.url) {
        case "/":
            path += "index.html";
            res.statusCode = 200;
            break;
        case "/about":
            path += "about.html";
            res.statusCode = 200;
            break;
        case "/about-me":  // redirect
            res.statusCode = 301;  // resource moved (like changing the name)
            res.setHeader("Location", "/about")
            res.end();
            break;
        default:
            path += "404.html";
            res.statusCode = 404;
            break;
    }

    fs.readFile(path, (err, data) => {
        if (err) {
            console.log(err)
            res.end();
        } else {
            //res.write(data);   // pode omitir e colocar no end quando apenas faz um write
            res.end(data);
        }
    })
});

server.listen(3000, "localhost", () => {
    console.log("Server listening on port 3000")
})