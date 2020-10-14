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
    let lines = data.split("\n");// Getting all the inputs
    const t = parseInt(lines.shift());// Getting the number of test cases
    for(let i=0; i<t; i++) {
        const nums = lines.shift().split(" ");// Getting the input for ith test case
        const A = parseInt(nums[0]);
        const B = parseInt(nums[1]);
        console.log(A+B);
    }
}