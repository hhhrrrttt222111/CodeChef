class Solution:
    def commonElements (self,A, B, C, n1, n2, n3):
        common = []
        final = []
        result = []
        for i in range(n1):
            common.append(A[i])
          
        for j in range(n2):
            if B[j] in common:
                final.append(B[j])
        
        for k in range(n3):
            if C[k] in final:
                result.append(C[k])
                
        # To remove redundancy
        res1 = []
        for l in result:
            if l not in res1:
                res1.append(l)
        res1.sort()
        return res1

t = int (input ())
for tc in range (t):
    n1, n2, n3 = list(map(int,input().split()))
    A = list(map(int,input().split()))
    B = list(map(int,input().split()))
    C = list(map(int,input().split()))
    
    ob = Solution()
    
    res = ob.commonElements (A, B, C, n1, n2, n3)
    
    if len (res) == 0:
        print (-1)
    else:
        for i in range (len (res)):
            print (res[i], end=" ")
        print ()

"""
Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Explanation: 20 and 80 are the only
common elements in A, B and C.
"""
