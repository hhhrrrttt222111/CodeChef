t = int(input())


while t:
    N, K = map(int, input().split())
    c = 0
    
    min = list(map(int, input().split()))

    for i in range(N):
        if (K+min[i])%7 == 0:
            c = c+1

    print(c)
    t = t-1
