t = int(input())

while t:
    A, B = map(int, input().split())
 
    c = 1
    while(c>0):
        if(c%2==0):
            B -= c
        else:
            A -= c
        if(A<0):
            print("Bob")    
            break
        if(B<0):
            print("Limak")
            break
        c += 1

    t = t-1

