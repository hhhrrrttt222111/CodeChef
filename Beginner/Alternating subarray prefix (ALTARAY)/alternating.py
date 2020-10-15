t = int(input())


while t:
    k = int(input())
    N = list(map(int,input().split()))
    arr = []
    arr.append(1)
    for j in range(k - 2,-1,-1) :
        if (N[j] > 0 and N[j + 1] < 0) or (N[j] < 0 and N[j + 1] > 0) :
            arr.append(arr[-1] + 1)
        else :
            arr.append(1)
    arr.reverse()
    print(*arr) 

    t = t-1