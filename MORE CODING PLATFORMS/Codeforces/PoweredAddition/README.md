# [Powered Addition](https://codeforces.com/contest/1338/problem/A)

You have an array a of length n. For every positive integer x you are going to perform the following operation during the x-th second:

Select some distinct indices i1,i2,…,ik which are between 1 and n inclusive, and add 2x−1 to each corresponding position of a. Formally, aij:=aij+2^(x−1) for j=1,2,…,k. Note that you are allowed to not select any indices at all.
You have to make a nondecreasing as fast as possible. Find the smallest number T such that you can make the array nondecreasing after at most T seconds.

Array a is nondecreasing if and only if a1≤a2≤…≤an.

You have to answer t independent test cases.

## Input
The first line contains a single integer t (1≤t≤10^4) — the number of test cases.

The first line of each test case contains single integer n (1≤n≤10^5) — the length of array a. It is guaranteed that the sum of values of n over all test cases in the input does not exceed 105.

The second line of each test case contains n integers a1,a2,…,an (−10^9≤ai≤10^9).

## Output
For each test case, print the minimum number of seconds in which you can make a nondecreasing.

## My solution
- My solution goes through the array and calculates the difference between the current element and the last non-decreasing element then sets the current element to the last non-decreasing element.
- To find smallest value of T we just have to find the biggest of these differences and then find the length of it's binary representation.
