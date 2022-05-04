import math

t = int(input())
while t > 0:
    n = int(input())
    maxTime = 0
    a = input().split(" ")
    bi = int(a[0])
    for i in a[1:]:
        k = int(i)
        if k - bi < 0: 
            c = math.floor(math.log(bi-k, 2)) + 1
            if c > maxTime:
                maxTime = c
        bi = max(k, bi)
    print(maxTime)

    t -= 1