t = int(input())


while t:
    n = int(input())
    a = []
    for i in range(n) :
        b = int(input())
        if b in a:
            a.remove(b)
        else:
            a.append(b)

    print(a[0])
    t = t-1