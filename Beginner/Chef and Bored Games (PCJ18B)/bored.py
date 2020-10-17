t = int(input())

while t:
    N = int(input())
    s = 0

    for i in range(N, 0, -2):
        s += i**2
    print(s)

    t = t-1