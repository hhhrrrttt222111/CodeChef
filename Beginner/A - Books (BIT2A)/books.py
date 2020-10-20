t = int(input())


while t:
    N = int(input())
    A = list(map(int, input().split()))

    c = 0
    for i in range(N):
        for j in range(i+1, N):
            if A[i]<A[j]:
                c = c+1
        print(c, end=' ')
        c = 0
    
    t = t-1