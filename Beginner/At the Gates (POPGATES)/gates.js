//initalise testCase#s - t from process input.
// Test case engine clearly uses old NodeJS stdin stream mode. 
// Assume from js solutions to other tasks:  Stdin is initially paused. must call .resume() to resume stream.
// process.stdin.resume();
// process.stdin.setEncoding("utf8");
// Assume: readline is supported
const rl = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});
// t # of test cases: number , n array containing number of coins in test case, k array containing number of ops
// coins array of arrays containing coin states for each testcase.
let t, nArr = [], kArr = [], coinStatesArr = [];
// assign variables
const variable = {
    lineCount : 1,
    getVars(input) {
        if (this.lineCount === 1) {t = parseInt(input); // initialise t once.
        } else if(this.lineCount % 3 === 0) {
            let line = input.split(' ')
            coinStatesArr[this.lineCount / 3 - 1] = line.map(coin => coin === 'H' ? true : false); //remap coin values => H = true, T = false or easier flipping
        } else if (this.lineCount % 2 === 0) {
            let line = input.split(' ');
            nArr[this.lineCount / 2 - 1] = line[0]
            kArr[this.lineCount / 2 - 1] = line[1]
        }
        this.lineCount ++
    }
};
// assume: synchronous process.stdin
rl.on('line', variable.getVars)
rl.resume()
// Get variables in order. 

let nHeads
for (let i = 0; i<t; i++) {
    coinStates = coinStatesArr[i]
    n = nArr[i] - 1 // -1 to align to 0 start index.
    k = kArr[i]
    for (let j = 0; j<k; j++) {
        // if last value of coinStates === true, remove last value & flip all coin states.
        if (coinsStates[n]) {
            coinStates.pop(); // remove last value of coinstates
            coinsStates.map(coinState => coinState ? false : true); // flip coin states true <=> false.
        } else coinstates.pop();
    }
    nHeads = 0; //reinitialise nheads after each loop
    coinstates.forEach(state => state ? nHeads ++ : null);
    console.log(nHeads); //output nHeads
}