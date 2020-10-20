t = int(input())


while t:
    N = int(input())

    A = list(map(int, input().split()))
    l = 1

    for i in A:
        l *= i

    if l%2==0:
            print("NO")
    else:
        print("YES")
        
    
    t = t-1