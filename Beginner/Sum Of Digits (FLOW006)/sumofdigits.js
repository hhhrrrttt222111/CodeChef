process.stdin.resume();
process.stdin.setEncoding('utf8');

let data = "";

process.stdin.on('data', function(chunk) {
    data += chunk.toString();
});

process.stdin.on('end', function() {
    runTestCases();
});

function runTestCases() {
    let lines = data.split("\n");
    for(let i = 1; i <= lines[0]; i++) {
      let result = 0;
      let numbers = lines[i].split('');
      for(let b = 0; b <= numbers.length - 1; b++) {
        result = result + Number(numbers[b]);
      }
      console.log(result);
    }
}