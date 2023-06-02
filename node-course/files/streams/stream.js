const fs = require('fs');

const readStream = fs.createReadStream("./docs/file.txt", { encoding: 'utf8' });
const writeStream = fs.createWriteStream("./docs/file2.txt")

// readStream.on("data", (chunk) => {  // whe receive buffer of data from stream
//     console.log("------------------ NEW DATA ----------------")
//     console.log(chunk);

//     writeStream.write("\n NEW CHUNK\n");
//     writeStream.write(chunk);
// })

// piping
readStream.pipe(writeStream);  // does the same as begore
