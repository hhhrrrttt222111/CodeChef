process.stdin.resume();
process.stdin.setEncoding("utf8");

let data = "";

process.stdin.on("data", function (chunk) {
  data += chunk.toString();
});

process.stdin.on("end", function () {
  runTestCases();
});

function runTestCases() {
  let lines = data.split("\n"); // Getting all the inputs
  let length = 0;
  const t = parseInt(lines[length++]); // Getting the number of test cases
  
  for (let i = 0; i < t; i++) {
    const input = parseInt(lines[length++]); // Getting the input for ith test case
    const values = lines[length++].split(' ');
    let count = 0;
    let obj = {};

    // If two sticks of same length can be considered as 1, so need to cut for distinct heights
    for(let j=0; j<values.length; j++) {
        const num = values[j];
        if(!obj[num] && num!=0) {
            obj[num] = 1;
            count++;
        }
    }

    console.log(count);
  }
}
