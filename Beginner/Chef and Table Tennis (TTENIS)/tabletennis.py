t = int(input())

while t:
    s = list(map(int, input().split()))

    L = s.count(0)
    W = s.count(1)

    if L>W:
        print('LOSE')
    else:
        print('WIN')

    t = t-1
    