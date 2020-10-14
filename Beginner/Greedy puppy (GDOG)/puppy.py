t = int(input())

while t:
    a, b = map(int, input().split())

    rem = -1
    for i in range(1, b+1):
        rem = max(a % i, rem)

    print(rem)
    t = t-1