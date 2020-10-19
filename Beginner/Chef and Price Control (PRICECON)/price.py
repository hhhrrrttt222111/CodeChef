t = int(input())

while t:
    N, K = map(int, input().split())

    P = list(map(int, input().split()))
    tot = sum(P)

    for i in range(len(P)):
        if P[i]>K:
            P[i] = K

    rev = sum(P)
    print(tot - rev)

    t = t-1
