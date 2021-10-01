# cook your dish here
T = int(input())
for __ in range(T):
    a, b = list(map(int, input().split()))
    isPossible = False
    q = b
    for i in range(50):
        if q % a == 0:
            isPossible = True
            break
        else:
            q *= b
    if isPossible:
        print("YES")
    else:
        print("NO")
