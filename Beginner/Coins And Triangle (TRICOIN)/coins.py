t = int(input())


while t:
    n = int(input())
    x = 1
    while n>0:
        n -= x
        x += 1
        if n < 0:
            print(x-2)
        elif n == 0:
            print(x-1)
    t = t-1