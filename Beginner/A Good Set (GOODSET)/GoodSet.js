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
  const t = parseInt(lines.shift()); // Getting the number of test cases
  for (let i = 0; i < t; i++) {
    const input = lines[i]; // Getting the input for ith test case
    let output="";
    let j=1;

    for(let k=0; k<input; k++) {
        output+=j+" ";
        j=j+2; //printing out odd numbers since sum of two odd will give even number which will not be part of the set
    }
    console.log(output);
  }
}
