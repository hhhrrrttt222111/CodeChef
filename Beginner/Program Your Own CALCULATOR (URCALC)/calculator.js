const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter the first number: ", function(A) {
    rl.question("Enter the second number: ", function(B) {
        rl.question("Enter the operator(+, -, *, /): ", function(C) {
            switch (C) {
                case "+":
                    console.log(parseInt(A) + parseInt(B));
                    break;
                
                case "-":
                    console.log(parseInt(A) - parseInt(B));
                    break;
                
                case "*":
                    console.log(parseInt(A) * parseInt(B));
                    break;
                
                case "/":
                    console.log(parseInt(A) / parseInt(B));
                    break;
            
                default:
                    console.log("Invalid Operator!");
                    break;
            };

            rl.close();
        });
    });
});