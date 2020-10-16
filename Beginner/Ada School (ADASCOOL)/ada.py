t  = int(input())

while t:
    N, M = map(int, input().split())

    if (N*M)%2 == 0:
        print('YES')
    else:
        print('NO')

    t = t-1
    