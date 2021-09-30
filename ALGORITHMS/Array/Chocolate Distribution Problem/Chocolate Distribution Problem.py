class Solution:

    def findMinDiff(self, A,N,M):
        if (N==0 or M==0):
            return 0
        
        A.sort()
        
        if N<M:
            return -1
        
        min_diff= A[N-1]- A[0]
        for i in range(len(A)-M+1):
            min_diff= min(min_diff, A[i+M-1]- A[i])
        return min_diff

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        N = int(input())
        A = [int(x) for x in input().split()]
        M = int(input())

        solObj = Solution()

        print(solObj.findMinDiff(A,N,M))
        
"""
Input:
N = 8, M = 5
A = {3, 4, 1, 9, 56, 7, 9, 12}
Output: 6
Explanation: The minimum difference between 
maximum chocolates and minimum chocolates 
is 9 - 3 = 6 by choosing following M packets :
{3, 4, 9, 7, 9}.
"""
