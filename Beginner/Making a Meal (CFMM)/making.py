t = int(input())


while t:
    N = int(input())
    c, o, d, e, h, f = 0, 0, 0, 0, 0, 0
    for i in range(N):
        S = input()
        c += S.count('c')
        o += S.count('o')
        d += S.count('d')
        e += S.count('e')
        h += S.count('h')
        f += S.count('f')

    print(min(c//2, o, d, e//2, h , f))

    t = t-1