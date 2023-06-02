const express = require('express');

const app = express();

// registering the view engine
app.set("view engine", "ejs");
// app.set("views", "myviews");  por padrão, procurar por views em pasta views, mas pode mudar 

app.listen(3000);  // could get the server as return

app.get("/", (req, res) => {
    // res.send("<p>home page</p>"); // faz  inferencia do tipo de dado que quer enviar ao servidor
    res.render("index")  // arquivo sem extensão
});

app.get("/about", (req, res) => {
    // res.send("<p>about page</p>"); // faz  inferencia do tipo de dado que quer enviar ao servidor
    res.render("about")
}); 

app.get("/blogs/create", (req, res) => {
    res.render("create");
});

// 40
app.use((req, res) => {  // runs every time gets to this point in the code
    res.status(404).render("404")
    // res.status() returns the object itself, so can call functions at its end
})