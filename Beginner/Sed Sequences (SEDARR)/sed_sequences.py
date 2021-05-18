for _ in range(int(input())):
    a,k = map(int,input().split())
    
    l = list(map(int,input().split()))
    
    if sum(l) % k == 0:
        print(0)
    else:
        l[0] = l[0] + sum(l) % k 
        print(1)