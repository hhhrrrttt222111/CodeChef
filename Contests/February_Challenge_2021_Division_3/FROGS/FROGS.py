import math
for _ in range(int(input())):
    n=int(input())
    w=list(map(int,input().split()))
    l=list(map(int,input().split()))
    d,s={},0
    for i in range(1,n+1): 
        d[i]=w.index(i)
    for i in range(2,n+1):
        t1,t2,t=d[i],d[i-1],0
        if t1<=t2:
            t=(math.ceil((t2+1-t1)/l[t1]))
        s+=t
        d[i]+=t*(l[t1])
    print(s)