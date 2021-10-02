for tc in range(int(input())):
    n,p,x,y=[int(i) for i in input().split()]
    l=[int(i) for i in input().split()]
    l=l[:p]
    c=0
    for i in l:
        if i==0:
            c+=x
        else:
            c+=y
    print(c)