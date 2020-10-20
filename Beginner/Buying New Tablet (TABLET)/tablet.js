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
        const numOfTestCase = nums[0];
        const budget = parseInt(nums[1]);
        let finalPrice = 0;
        let maxArea = 0;

        for(let j=0; j<numOfTestCase; j++) {
            const value = lines.shift().split(" ");// Getting the input for jth test case
            const length = parseInt(value[0]);
            const breadth = parseInt(value[1]);
            const price = parseInt(value[2]);

            if(price <= budget) {
                const area = length*breadth;
                if(area > maxArea) {
                    maxArea = area;
                    finalPrice = price;
                }
            }
        }
        if(finalPrice > 0) console.log(maxArea);
        else console.log("no tablet");
    }
}