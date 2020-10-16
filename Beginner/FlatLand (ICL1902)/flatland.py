t = int(input())


while t:
    N = int(input())

    c = 0
    while(N > 0):
        N -= pow(int(pow(N , 0.5)) , 2)
        c += 1 
    print(c)

    t = t-1