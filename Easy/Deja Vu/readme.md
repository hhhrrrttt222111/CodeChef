Deja Vu https://www.codechef.com/problems/DEJAVU

Description-
You're given a sequence of N - distinct positive integers, not necessarily sorted in ascending order. Your task is pretty straightforward: sort the sequence in ascending order. At any point of time, you can perform one of the following operations:

If there is only one sequence, with a length greater than 1, split it at some point to divide it into two non-empty sequences. The cost to perform this operation is the minimum of the sizes of the two broken parts.

If there are multiple sequences (due to one or more split operations in the past), you may choose one of them with a length greater than 1 and split it at some point to divide it into two non-empty sequences. The cost to perform this operation is the minimum of the sizes of the two broken parts.

If there are multiple sequences (due to one or more split operations in the past), you may choose two of them and concatenate them in any order. The cost to perform this operation is the length of the resulting sequence, i.e., the sum of the lengths of the first and the second part.

It turns out that there are a LOT of ways to sort the array by following this scheme! You need to find out the minimum cost of all the operations required to sort the array in the optimal manner.

Constraints-
1≤T≤10
1≤N≤200
1≤Ai≤106

Sample Input 1 -
2
5
1 2 4 5 3
5
1 2 3 4 5