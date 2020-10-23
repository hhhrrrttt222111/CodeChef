t = int(input())


while t:
    N, K = map(int, input().split())
    A = list(map(int, input().split()))
    s = 0

    for i in range(N):
        s += A[i]-K
        if s<0:
            print('NO ',i+1)
            break
    else:
        print('YES')

    t = t-1