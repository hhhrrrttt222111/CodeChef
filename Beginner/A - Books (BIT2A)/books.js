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
        const inpLength = parseInt(lines.shift());
        const valuesArray = lines.shift().split(" ");
        let outputArray = [];
        let checkDuplicateObj = {};

        //To check the count of duplicate values if any
        for(let i=0; i<inpLength; i++) {
            const value = valuesArray[i];
            if(!checkDuplicateObj[value]) {
                checkDuplicateObj[value] = 1;
            } else {
                checkDuplicateObj[value] += 1;
            }
        }
    // Finding the actual output value
        for(let i=0; i<inpLength; i++) {
            const value = valuesArray[i];
            let newValue = inpLength - i - checkDuplicateObj[value];
            checkDuplicateObj[value] -= 1; // removing the count of value that has been pushed for getting the proper o/p for dup values
            outputArray.push(newValue);
        }

        console.log(outputArray.join(' '));
    }
}