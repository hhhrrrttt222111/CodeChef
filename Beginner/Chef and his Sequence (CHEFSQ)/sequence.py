t = int(input())

while t:
    N = int(input())
    A = list(map(int, input().split()))

    M = int(input())
    B = list(map(int, input().split()))

    j, k = 0,0
    c = 0
    while j<N and k<M:
        if A[j]==B[k]:
            j = j+1
            k = k+1
            c = c+1
        else:
            j = j+1
    if c==M:
        print("Yes")
    else:
        print("No")

    t = t-1