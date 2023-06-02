const fs = require("fs"); // module for file system

// reading files
// async function; executes the given function on completion
// fs.readFile("./docs/test.txt", (err, data) => {
//     if (err) {
//         console.log(err);
//     }
//     console.log(data.toString()); // data is a buffer
// });

// console.log("after readFile");

// // testing error
// fs.readFile("./docs/test_doesnt_exist.txt", (err, data) => {
//     if (err) {
//         console.log(err);
//     } else {
//         console.log(data.toString()); // data is a buffer
//     }
// });

// -----------------------------
// writing files
// fs.writeFile("./docs/test.txt", "Hello world!", () => {
//     console.log("arquivo escrito ");
// })

// // caso arquivo não exista, o cria
// fs.writeFile("./docs/test2.txt", "Hello world!", () => {
//     console.log("arquivo escrito ");
// })

// -----------------------------
// directories
// throws error if folder already exists
if (!fs.existsSync("./assets")) {
    fs.mkdir("./assets", (err) => {
        if (err) {
            console.log(err);
        } else {
            console.log("Folder created");
        }
    });
} else {
    fs.rmdir("./assets", (err) => {
        if (err) {
            console.log(err);
        } else {
            console.log("folder deleted")
        }
    })
}

// -----------------------------
// deleting files
if (fs.existsSync("./docs/deleteme.txt")) {
    fs.unlink("./docs/deleteme.txt", (err) => {
        if (err) {
            console.log(err);
        } else {
            console.log("deleteme deleted");
        }
    }); 
}  
