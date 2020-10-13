t = int(input())
while(t):
    n = int(input())
    fact = 1
    i = n
    while(i!=1):
        fact =  fact * i
        i = i -1
    print(fact)
    t = t - 1