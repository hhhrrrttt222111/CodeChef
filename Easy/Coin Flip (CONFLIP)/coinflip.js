process.stdin.resume();
process.stdin.setEncoding("utf8");

// your code goes here
let input = "";
process.stdin.on("data", (chunk) => (input += chunk));
process.stdin.on("end", () => {
  input = input.trim().split("\n");
  let t = input[0];
  let i = 1;
  let G;
  let N;
  let j;
  while (t--) {
    G = input[i++];
    while (G--) {
      j = input[i++].split(" ");
      N = j[1];
      if (N % 2 === 0) {
        process.stdout.write(N / 2 + "\n");
      } else {
        process.stdout.write((j[0] == j[2] ? N - 1 : +N + 1) / 2 + "\n");
      }
    }
  }
});
