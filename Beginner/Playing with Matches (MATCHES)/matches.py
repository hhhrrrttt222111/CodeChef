t = int(input())
M = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]

while t:
    A, B = map(int, input().split())
    m = 0

    S = str(A+B)
    for i in S:
        i = int(i)
        m = m + M[i]
    print(m)

    t  = t-1