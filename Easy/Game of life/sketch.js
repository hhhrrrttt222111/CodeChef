let board;
let rows;
let cols;
let res = 10;


function setup(){
    createCanvas(1000, 400);
    rows = width / res;
    cols = height / res;

    board = gen_board(rows, cols);
    randomInit(board, rows, cols);
}

function randomInit(board, rows, cols){
    for(let i = 0; i < rows; i++){
        for(let j = 0; j < cols; j++){
            board[i][j] = (Math.random()>=0.5)? 1 : 0;
        }
    }
}

function gen_board(rows, cols){
    let arr = new Array(rows);
    for(let i  = 0; i < rows; i++){
        arr[i] = new Array(cols);
    }
    return arr;
}

function countN(board, x, y) {
    let c = 0;
    for (let i = -1; i < 2; i++) {
        for (let j = -1; j < 2; j++) {
            if(i == 0 && j == 0){
                continue;
            }
            if(x-i < 0 || x-i == rows || y-j < 0 || y-j == cols){
                continue;
            }
            if(board[x-i][y-j] == 1){
                c++;
            }
        }
    }

    return c;
}
function draw(){
    background(0);

    for(let i = 0; i < rows; i++){
        for(let j = 0; j < cols; j++){
            let x = i * res;
            let y = j * res;
            if(board[i][j] == 1){
                fill(255);
                stroke(0);
                rect(x, y, res-1, res-1);
            }
        }
    }
    let newG = gen_board(rows, cols);
    let c;
    for(let i = 0; i < rows; i++){
        for(let j = 0; j < cols; j++){
            c = countN(board, i, j);
            if(board[i][j] == 1 && c < 2){
                newG[i][j] = 0;
            }else if(board[i][j] == 1 && c > 3){
                newG[i][j] = 0;
            }else if(board[i][j] == 1 && (c == 3 || c == 2)){
                newG[i][j] = 1;
            }else if(board[i][j] == 0 && c == 3){
                newG[i][j] = 1;
            }else{
                newG[i][j] = 0;
            }
        }
    }
    board = newG;
}