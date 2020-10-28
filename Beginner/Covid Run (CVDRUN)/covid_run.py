t = int(input())
for i in range(t):
    n = int(input())
    k = int(input())
    x = int(input())
    y = int(input())
    if x == y:
        print("YES")
        break
    spread = x
    while True:
        spread = (spread + k) % n
        if spread == y:
            print("YES")
            break
        elif spread == x:
            print("NO")
            break