# [MadokaAndMathDad](https://codeforces.com/contest/1647/problem/A)
Madoka finally found the administrator password for her computer. Her father is a well-known popularizer of mathematics, so the password is the answer to the following problem.

Find the maximum decimal number without zeroes and with no equal digits in a row, such that the sum of its digits is n.
Madoka is too tired of math to solve it herself, so help her to solve this problem!

## Input
Each test contains multiple test cases. The first line contains a single integer t $(1≤t≤1000)$ — the number of test cases. Description of the test cases follows.

The only line of each test case contains an integer n $(1≤n≤1000)$ — the required sum of the digits.

## Output
For each test case print the maximum number you can obtain.

## My solution
- For any value of n the biggest possible number will be some alternating combination of 1 and 2 since this number will be the longest.
- The order if these 1s and 2s depends on the value of n%3 since we will have some number of '21's followed by either nothing, 1 or 2 to get the sum to reach n.