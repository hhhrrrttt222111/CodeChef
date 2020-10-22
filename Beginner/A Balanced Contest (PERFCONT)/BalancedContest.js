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
    const input = lines.shift().split(" "); // Getting the input for ith test case
    const problems = parseInt(input[0]);
    const totalParticipants = parseInt(input[1]);
    const solvedByArray = lines.shift().split(" "); //Getting the array of number of participants who solved the questions
    let totalHardProblems = 0,
      totalCakeWalk = 0;

    for (let i = 0; i < problems; i++) {
      const noOfParticipants = parseInt(solvedByArray[i]);
      if (noOfParticipants >= parseInt(totalParticipants / 2)) totalCakeWalk++;
      else if (noOfParticipants <= parseInt(totalParticipants / 10))
        totalHardProblems++;
    }
    if (totalHardProblems === 2 && totalCakeWalk === 1) console.log("yes");
    else console.log("no");
  }
}
