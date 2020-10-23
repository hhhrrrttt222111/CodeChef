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
    // your code goes here
    const lines = data.split('\n');
    const queries = intMapper(lines.shift());
    for(let i=0; i<queries; i++) {
        const query = lines.shift().split(' ').map(intMapper).sort((a,b) => a-b);
        const city1 = query[0];
        const city2 = query[1];
        if(city2 == city1+2 || (city1%2 == 1 && (city2 == city1+1))) {
            console.log('YES');
        }
        else {
            console.log('NO');
        }
    }
}

function intMapper(str) {
    return parseInt(str);
}