# [PaintTheArray](https://codeforces.com/problemset/problem/1618/C)
You are given an array a consisting of n positive integers. You have to choose a positive integer d and paint all elements into two colors. All elements which are divisible by d will be painted red, and all other elements will be painted blue.

The coloring is called beautiful if there are no pairs of adjacent elements with the same color in the array. Your task is to find any value of d which yields a beautiful coloring, or report that it is impossible.

## Input
The first line contains a single integer t, $(1≤t≤1000)$ — the number of testcases.

The first line of each testcase contains one integer n $(2≤n≤100)$ — the number of elements of the array.

The second line of each testcase contains n integers a1,a2,…,an $(1≤a_i≤10^18)$.

## Output
For each testcase print a single integer. If there is no such value of d that yields a beautiful coloring, print 0. Otherwise, print any suitable value of d $(1≤d≤10^18)$.

## My Solution
- First I split the initial array in two arrays a and b which have alternating values from the initial array. 
- I then find the greatest common divider of the array a, if this is 1 then there is no possible value of d for this half of the array, if its not 1 then I check that no element in the array b are divisible by this value, if this is the case then our GCD is valid value for d.
- In the case that the first half has a GCD of 1 I move onto the next half and repeat the process. If this doesn't find a valid value for d then we return 0 otherwise return d.
