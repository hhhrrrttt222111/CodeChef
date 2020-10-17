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
        let A = parseInt(nums[0]);
        let B = parseInt(nums[1]);
        let counter = 1;

        while(A >= 0 && B >= 0) {
            if(counter % 2 !== 0) A-=counter;//Removing the candies from total that Limak has to eat in each round
            else B-=counter;//Removing the candies from total that Bob has to eat in each round
            counter++;
        }

        if(A<0) console.log("Bob");
        else if(B<0) console.log("Limak");
        else console.log("Bob");
    }
}