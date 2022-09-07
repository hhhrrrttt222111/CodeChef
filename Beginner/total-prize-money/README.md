Total Prize Money
Problem Code:
PRIZEPOOL
Contest Code:
MAY222


Problem
In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:

Top 1010 participants receive rupees XX each.
Participants with rank 1111 to 100100 (both inclusive) receive rupees YY each.
Find the total prize money over all the contestants.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers XX and YY - the prize for top 1010 rankers and the prize for ranks 1111 to 100100 respectively.
Output Format
For each test case, output the total prize money over all the contestants.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq Y \leq X \leq 10001≤Y≤X≤1000
Sample 1:
Input
Output
4
1000 100
1000 1000
80 1
400 30
19000
100000
890
6700
Explanation:
Test Case 11: Top 1010 participants receive rupees 10001000 and next 9090 participants receive rupees 100100 each. So, total prize money = 10 \cdot 1000 + 90 \cdot 100 = 19000=10⋅1000+90⋅100=19000.

Test Case 22: Top 1010 participants receive rupees 10001000 and next 9090 participants receive rupees 10001000 each. So, total prize money = 10 \cdot 1000 + 90 \cdot 1000 = 100000=10⋅1000+90⋅1000=100000.

Test Case 33: Top 1010 participants receive rupees 8080 and next 9090 participants receive rupee 11 each. So, total prize money = 10 \cdot 80 + 90 \cdot 1 = 890=10⋅80+90⋅1=890.

Test Case 44: Top 1010 participants receive rupees 400400 and next 9090 participants receive rupees 3030 each. So, total prize money = 10 \cdot 400 + 90 \cdot 30 = 6700=10⋅400+90⋅30=6700.
