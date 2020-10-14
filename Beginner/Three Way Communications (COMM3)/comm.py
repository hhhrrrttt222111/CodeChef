t = int(input())

while t:
    R = int(input())
    x,y = map(int,input().split())
    x1,y1 = map(int,input().split())
    x2,y2 = map(int,input().split())
    A = ((((x-x1)**2)+ ((y - y1)**2))**(1/2))
    B = ((((x2-x1)**2)+ ((y2 - y1)**2))**(1/2))
    C = ((((x-x2)**2)+ ((y - y2)**2))**(1/2))
    if A<=R:
        if B<=R or C<=R:
            print("yes")
        else:
            print("no")
    elif  B<=R:
        if A<=R or C<=R:
            print("yes")
        else:
            print("no")
    elif C<=R:
        if A<=R or B<=R:
            print("yes")
        else:
            print("no")
    elif ((A>=R) and ((B>=R) and (C>=R))):
        print("no")

    t = t-1