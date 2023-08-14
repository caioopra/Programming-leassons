const express = require('express');
const morgan = require('morgan');  // middleware

const app = express();

// registering the view engine
app.set("view engine", "ejs");
// app.set("views", "myviews");  por padrão, procurar por views em pasta views, mas pode mudar 
app.listen(3000);  // could get the server as return

// middlewre and static files (from next)
app.use(express.static("public"));  // name of folder that should be public

// middleware
// app.use((req, res, next) => {
//     console.log("new request made: ");
//     console.log("host: ", req.hostname);
//     console.log("path: ", req.path);
//     console.log("method: ", req.method);
//     next();
// });  // does not know by default what to do next *without next)

// there are different argument to be used
app.use(morgan("dev"));

app.use((req, res, next) => {
    console.log("useless middleware printing");
    next();
});  // does not know by default what to do next *without next)

// routing
app.get("/", (req, res) => {
    // res.send("<p>home page</p>"); // faz  inferencia do tipo de dado que quer enviar ao servidor
    const blogs = [
        { title: "Blog number 1", snippet: "Lorem ipsum dolor sit amet consectetur"},
        { title: "Blog number 2", snippet: "Lorem ipsum dolor sit amet consectetur"},
        { title: "Blog number 3", snippet: "Lorem ipsum dolor sit amet consectetur"},
    ];
    // can use the same name as the variable and short it
    res.render("index", { title: "Home", blogs })  // arquivo sem extensão
});

app.get("/about", (req, res) => {
    // res.send("<p>about page</p>"); // faz  inferencia do tipo de dado que quer enviar ao servidor
    res.render("about", { title: "About" })
}); 

app.get("/blogs/create", (req, res) => {
    res.render("create", { title: "Create a new Blog" });
});

// 404
app.use((req, res) => {  // runs every time gets to this point in the code
    res.status(404).render("404", { title: "Error" })
    // res.status() returns the object itself, so can call functions at its end
})