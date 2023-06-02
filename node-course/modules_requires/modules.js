// const require_people = require('./people'); // run the file automatically

// console.log(require_people)
// console.log(require_people.ages)

const { people, ages } = require('./people');  // destructuring the object
console.log(people);

const os = require('os');
console.log(os.platform(), os.homedir());