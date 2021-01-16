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
    const name = lines[length++];
    const partsOfName = name.split(" ");

    if (partsOfName.length === 1) {
      const lastName = partsOfName[0].toLowerCase();
      console.log(lastName.charAt(0).toUpperCase() + lastName.slice(1));
    } else if (partsOfName.length === 2) {
      const firstName = partsOfName[0];
      const lastName = partsOfName[1].toLowerCase();
      console.log(
        firstName.charAt(0).toUpperCase() +
          ". " +
          lastName.charAt(0).toUpperCase() +
          lastName.slice(1)
      );
    } else {
      const firstName = partsOfName[0];
      const middleName = partsOfName[1];
      const lastName = partsOfName[2].toLowerCase();
      console.log(
        firstName.charAt(0).toUpperCase() +
          ". " +
          middleName.charAt(0).toUpperCase() +
          ". " +
          lastName.charAt(0).toUpperCase() +
          lastName.slice(1)
      );
    }
  }
}
