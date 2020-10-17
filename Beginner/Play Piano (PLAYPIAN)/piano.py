t = int(input())


while t:
    P = input()
    s = 1

    for i in range(0, len(P), 2):
        if P[i]==P[i+1]:
            s = 0 
            break
        else:
            s = 1 
    if (s==0):
        print("no")
    else:
        print("yes")

    t = t-1