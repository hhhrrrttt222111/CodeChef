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
  let counter = 0;
  const t = parseInt(lines[counter++]); // Getting the number of test cases
  for (let i = 0; i < t; i++) {
      const recipeTypes = parseInt(lines[counter++]);
      let totalLoss = 0;
    for (let j = 0; j < recipeTypes; j++) {
        const inputs = lines[counter++].split(' ');
        const price = parseFloat(inputs[0]);
        const quantity = parseInt(inputs[1]);
        const discount = parseFloat(inputs[2]);

        const loss = (price*discount*discount)/10000;

        totalLoss+=loss*quantity;
    }
    console.log(totalLoss);
  }
}
