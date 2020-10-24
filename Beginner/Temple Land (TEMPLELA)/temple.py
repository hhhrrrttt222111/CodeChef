S = int(input())

while S:
    N = int(input())
    H=list(map(int,input().split()))

    if N%2 != 0:
        if H[0]==1 and H[-1]==1:
            s=0
            for i in range(1, N//2+1):
                if H[i]==H[-1-i] and H[i]==H[i-1]+1:
                    s+=1
                else:
                    print("no")
                    break
            if s==N//2:
                print("yes")
        else:
            print("no")
    else:
        print("no")

    S = S-1