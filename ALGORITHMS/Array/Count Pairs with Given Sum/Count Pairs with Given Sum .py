class Solution:
    def getPairsCount(self, arr, n, k):
        count = 0
        for i in range(n):
            for j in range(i+1,n):
                if arr[i] + arr[j]== k:
                    count +=1
        return count

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, k = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.getPairsCount(arr, n, k)
        print(ans)
        tc -= 1
"""
Input  :  arr[] = {1, 5, 7, -1}, 
          sum = 6
Output :  2
Pairs with sum 6 are (1, 5) and (7, -1)
"""
