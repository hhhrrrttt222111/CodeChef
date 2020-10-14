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
        const apples = parseInt(nums[0]);
        const oranges = parseInt(nums[1]);
        const gold = parseInt(nums[2]);
        const max = Math.max(apples, oranges);
        const min = Math.min(apples, oranges);
        const sum = min+gold;

        console.log(Math.max(max-sum, 0));
    }
}