t = int(input())


while t:
    f = False
    M, N = map(int,input().split())
    A = list(map(int,input().split()))
    
    for i in range(0,len(A)-M+1,M):
        s = A[i:i+M]
        if len(set(s))!=M:
            f = True
    if f==True:
        print("NO")
    else:
        print("YES")

    t = t-1