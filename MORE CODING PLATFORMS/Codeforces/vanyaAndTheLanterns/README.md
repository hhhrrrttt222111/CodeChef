# [Vanya and the lanterns](https://codeforces.com/contest/492/problem/B)
Vanya walks late at night along a straight street of length $l$, lit by $n$ lanterns. Consider the coordinate system with the beginning of the street corresponding to the point 0, and its end corresponding to the point $l$. Then the i-th lantern is at the point $a_i$. The lantern lights all points of the street that are at the distance of at most $d$ from it, where $d$ is some positive number, common for all lanterns.

Vanya wonders: what is the minimum light radius d should the lanterns have to light the whole street?

## Input
The first line contains two integers $n, l$ ($1 ≤ n ≤ 1000, 1 ≤ l ≤ 109$) — the number of lanterns and the length of the street respectively.

The next line contains n integers $a_i$ ($0 ≤ a_i ≤ l$). Multiple lanterns can be located at the same point. The lanterns may be located at the ends of the street.

## Output
Print the minimum light radius d, needed to light the whole street. The answer will be considered correct if its absolute or relative error doesn't exceed $10^{-9}$.

## My solution
- sort the array of $a_i$'s in ascending order and find the biggest distance between two consecutive lamposts. Divide this by two to get $d$. 
- This algorithm only works when we have lamposts at $0$ and $l$, to cover all cases we have to define diff to be $max(A[0], l- A[n-1])$ where A is our array. 
- This is because to biggest difference could be between the start of the street and the the first lampost or the last lampost and the end of the street.