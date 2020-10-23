t=int(input())
 

while t:
    N = int(input())
    S = list(input().split())
    f = 0

    for j in range(N):
        if (j+1)<N and S[j]=="cookie" and S[j+1]!="milk":
            f=1
            break
        elif S[N-1]=="cookie":
            f=1
            break
        
    if f==1:
        print("NO")
    else:
        print("YES")

    t = t-1
