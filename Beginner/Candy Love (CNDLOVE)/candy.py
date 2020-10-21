t = int(input())


while t:
    N = int(input())
    A = list(map(int, input().split()))

    s = sum(A)
    if s%2==0:
        print('NO')
    else:
        print('YES')

    t = t-1