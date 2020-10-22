t = int(input())


while t:
    N, P = map(int, input().split())
    A = list(map(int, input().split()))

    e = 0
    h = 0
    for i in A:
        if i>=P//2:
            e+=1
        elif i<=P//10:
            h+=1
    if P==1:
        print("no")
    elif e==1 and h==2:
        print("yes")
    else:
        print("no")
            
    t = t-1