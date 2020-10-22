N = int(input())
A = list(map(int,input().split()))

A.sort()
p = set(A)
B = list(p)
B.sort()

if len(B)<2:
    print(0)
else:
    print(B[-2] % B[-1])