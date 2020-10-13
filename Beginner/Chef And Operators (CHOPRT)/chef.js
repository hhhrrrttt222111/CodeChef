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
    const t = parseInt(lines.shift());
    for(let i=0; i<t; i++) {
        const nums = lines.shift().split(" ");
        const A = parseInt(nums[0]);
        const B = parseInt(nums[1]);
        if(A>B) {
            console.log(">");
        }
        else if(B>A) {
            console.log("<");
        }
        else {
            console.log("=");
        }
    }
}