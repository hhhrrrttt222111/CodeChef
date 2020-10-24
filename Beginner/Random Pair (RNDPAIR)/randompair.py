t = int(input())

while t:
    N = int(input())
    A = list(map(int, input().split()))
    l = []

    for i in range(N):
        for j in range(i+1, N):
            l.append(A[i]+A[j])

    c = l.count(max(l))

    print(c/len(l))

    t = t-1