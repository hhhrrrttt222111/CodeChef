t = int(input())

while t:
    a, b = map(int, input().split())
    
    if abs(a-b) <= 2:
        if a % 2 == 0:
            if a-b > 0 or a-b == -2:
                print("YES")
            else:
                print("NO")
        else:
            if b-a == -2 or b-a > 0:
                print("YES")
            else:
                print("NO")
    else:
        print("NO")

    t = t-1