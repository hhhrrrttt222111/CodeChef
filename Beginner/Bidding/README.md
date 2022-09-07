Bidding
Problem Code:
AUCTION
Contest Code:
JULY221

Problem
Alice, Bob and Charlie are bidding for an artifact at an auction.
Alice bids AA rupees, Bob bids BB rupees, and Charlie bids CC rupees (where AA, BB, and CC are distinct).

According to the rules of the auction, the person who bids the highest amount will win the auction.
Determine who will win the auction.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains three integers AA, BB, and CC, — the amount bid by Alice, Bob, and Charlie respectively.
Output Format
For each test case, output who (out of Alice, Bob, and Charlie) will win the auction.

You may print each character of Alice, Bob, and Charlie in uppercase or lowercase (for example, ALICE, aliCe, aLIcE will be considered identical).

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq A, B, C \leq 10001≤A,B,C≤1000
AA, BB, and CC are distinct.
Sample 1:
Input
Output
4
200 100 400
155 1000 566
736 234 470
124 67 2
Charlie
Bob
Alice
Alice
Explanation:
Test Case 11: Charlie wins the auction since he bid the highest amount.

Test Case 22: Bob wins the auction since he bid the highest amount.

Test Case 33: Alice wins the auction since she bid the highest amount.

Test Case 44: Alice wins the auction since she bid the highest amount.
