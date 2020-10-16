t = int(input())

while t:
    C, D, L = map(int, input().split())

    M = C*4 + D*4
    m = D*4
    if C > 2*D:
        m += (C-2*D)*4
    if m <= L <= M and L % 4 == 0:
        print('yes')
    else:
        print('no')

    t = t-1
        