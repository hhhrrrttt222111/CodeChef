t = int(input())

for i in range(t):
    N = int(input())
    s = N+1

    while(True):
        c = str(s)
        if c.count('3') >= 3:
            break
        s = s+1
    print(s)
