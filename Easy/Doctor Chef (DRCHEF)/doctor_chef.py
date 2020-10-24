for i in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    a.sort()
    c=0
    for i in range(n):
        if a[i]<=k:
            c+=1
            k=max(k,2*a[i])
        else:
            while k<a[i]:
                k=2*k
                c+=1
            c+=1
            k=2*a[i]
    print(c)        
