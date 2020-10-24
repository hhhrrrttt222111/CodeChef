t = int(input())


while t:
    N = int(input())
    S = input()
    X = ['L','R']
    Y = ['U','D']
    x = 0
    y = 0
    p = ''

    for i in S:
        if i=='L' and p not in X:
            x -= 1
            p = i
        elif i=='R' and p not in X:
            x += 1
            p = i
        elif i=='U' and p not in Y:
            y += 1
            p = i
        elif i=='D' and p not in Y:
            y -= 1
            p = i
    print(x,y)

    t = t-1