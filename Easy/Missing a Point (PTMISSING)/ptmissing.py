
from collections import defaultdict as dd
t = int(input())
for T in range(t):
    n = int(input())
    x = dd(int)
    y = dd(int)

    for i in range(4 * n - 1):
        v1, v2 = [int(_) for _ in input().split()]
        x[v1] += 1
        y[v2] += 1
    ansx, ansy = 0, 0
    for i in x:
        if x[i] % 2:
            ansx = i
            break

    for i in y:
        if y[i] % 2:
            ansy = i
            break

    print(ansx, ansy)
