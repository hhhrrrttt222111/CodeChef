t = int(input())

while t:
    N = int(input())

    S = list(input())
    R = list(input())

    if S.count('1') == R.count('1'):
        print('YES')
    else:
        print('NO')

    t = t-1