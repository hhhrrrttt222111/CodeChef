t = int(input())

while t:
    a, b = map(int, input().split())
    if a <= 1000:
        exp = a*b
    else:
        exp = a * b * 0.9

    print(exp)

    t = t-1