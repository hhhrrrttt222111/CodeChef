t = int(input())

while t:
    A = input()
    B = input()
    f = False;
    for i in A:
        if i in B:
            f = True;
            break;
    if f == True:
        print("Yes")
    else:
        print("No")
        

    t = t-1