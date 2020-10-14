t = int(input())

while t:
    N, M, K = map(int, input().split())

    for i in range(K):
        if N>M:
            M = M+1
        elif M>N:
            N = N+1
        else:
            break

    print(abs(N-M))

    t = t-1