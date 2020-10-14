process.stdin.resume();
process.stdin.setEncoding('utf8');

// your code goes here
let data = "";

process.stdin.on('data', function(chunk) {
    data += chunk.toString();
});

process.stdin.on('end', function() {
    runTestCase();
});

function runTestCase() {
    let lines = data.split(" ");
    const withdrawal = parseInt(lines[0]);
    const total = parseFloat(lines[1]);
    const charge = parseFloat(0.50);

    if((withdrawal % 5 !==0) || (withdrawal+charge > total)) console.log(total);
    else if(withdrawal % 5 === 0) console.log(total-withdrawal-charge);
}