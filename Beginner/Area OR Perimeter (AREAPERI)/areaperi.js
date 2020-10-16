process.stdin.resume();
process.stdin.setEncoding("utf8");

// your code goes here
let data = "";

process.stdin.on("data", function (chunk) {
  data += chunk.toString();
});

process.stdin.on("end", function () {
  runTestCase();
});

function runTestCase() {
  let lines = data.split("\n");
  const length = parseInt(lines[0]);
  const breadth = parseFloat(lines[1]);
  const area = length * breadth;
  const perimeter = 2 * (length + breadth);

  if (area > perimeter) {
    console.log("Area");
    console.log(area);
  } else if (perimeter > area) {
    console.log("Peri");
    console.log(perimeter);
  } else {
    console.log("Eq");
    console.log(area);
  }
}