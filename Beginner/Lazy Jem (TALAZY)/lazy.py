t = int(input())


while t:
    N, B, M = map(int, input().split())
    T = 0

    while N>1:
        if N%2 == 0:
            T += (N//2)*M + B
            N -= N//2
        else:
            T += (N+1)//2*M + B
            N -= (N+1)//2
        M *= 2
    
    print(T+M)

    t = t-1
