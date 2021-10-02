# cook your dish here
import math
for i in range(int(input())):
    n,m=map(int,input().split())
    a=[1 for j in range(n+1)]
    sumi=0
    for j in range(m):
        x,b,d=map(int,input().split())
        a[x-1]*=d
        a[b]/=d
    for j in range(1,len(a)):
        a[j]*=a[j-1]
    for j in range(n):
        sumi+=int((a[j]*10))
    print(sumi//n)
