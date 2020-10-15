t = int(input())

while t:
    n = int(input())
    L = list(map(int, input().split()))
    R = list(map(int, input().split()))

    ans = 0
    r = 0
    ind = -1

    for i in range(n):
        P = L[i]*R[i]
        if(P > ans):
            ans = P
            ind = i+1
            r = R[i]
        elif(P == ans):
            if(r < R[i]):
                r = R[i]
                ind = i+1

    print(ind)

    t = t-1