T = int(input())


for i in range(T):
    N = int(input())
    A = list(map(int, input().split()[:N]))
    oddValid = True
    
    for k in A:
        if k % 2 == 0:
            oddValid = False
            break
        
    if oddValid:
        print("YES")
        
    if not oddValid:
        print("NO")