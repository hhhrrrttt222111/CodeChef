t = int(input())

for i in range(t) :
    n = int(input())
    c = 0
    while n != 0 :
        if n >= 100 :
            n -= 100
        elif n >= 50 :
            n -= 50
        elif n >= 10 :
            n -= 10
        elif n >= 5 :
            n -= 5
        elif n >= 2 :
            n -= 2
        else :
            n -= 1
        c += 1
    print(c)