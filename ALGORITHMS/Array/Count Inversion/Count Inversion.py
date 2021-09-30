class Solution:
    def inversionCount(self, arr, n):
        count = 0
        for i in range(n):
            for j in range(i+1, n):
                if arr[i]> arr[j]:
                    count +=1
        return count

if __name__=='__main__':
    t = int(input())
    for tt in range(t):
        n = int(input())
        a = list(map(int, input().strip().split()))
        obj = Solution()
        print(obj.inversionCount(a,n))
        
""" Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3). """
