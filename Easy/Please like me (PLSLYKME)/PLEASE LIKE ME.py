N=int(input("Enter the number of test cases:"))
for i in range(0,N):
    L,D,S,C=map(int,input().split())
    for i in range(1,D):
        if(S>=L):
            S+=C*S
        break
    if L<= S:
        print("ALIVE AND KICKING")
    else:
        print("DEAD AND ROTTING")