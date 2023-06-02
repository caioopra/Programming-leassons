const http = require("http");
const fs = require('fs');
const _ = require('lodash');

// runs the function every time the server receives a request
// response possui informações sobre request (tipo, ...)
const server = http.createServer((request, response) => {
    // lodash
    const num = _.random(0, 20);
    console.log(num);

    const greet = _.once(() => {
        console.log("Hello, once")
    });

    greet();
    greet();
    
    // set header content type (useful for the browser)
    response.setHeader("Content-Type", "text/html");
    
    response.write("<h1>Hello!</h1>");
    response.write("<p>Hello, World!</p>")
    response.write("<p>Hello, World, again!</p>")
    response.end();
});

// port; name (default=localhost)
server.listen(3000, "localhost", () => {
    console.log("Server listening for requests on port 3000");
});
