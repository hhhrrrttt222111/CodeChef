t = int(input())

while t:
    N = int(input())
    c = 0

    for i in range(N):
        S, J = map(int, input().split())
        if J-S >5:
            c += 1
    
    print(c)

    t = t-1