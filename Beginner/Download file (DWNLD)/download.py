t = int(input())

while t:
    N, K = map(int, input().split())

    s = 0
    for n in range(N):
        T, D = map(int,input().split())
        if K!=0:
            if K>=T:
                K = K-T
                T = 0
            else:
                T = T-K
                K = 0
        s += T*D
    print(s)

    t  = t-1