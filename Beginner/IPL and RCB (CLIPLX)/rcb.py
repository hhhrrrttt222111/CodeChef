t = int(input())

while t:
    X, Y = map(int, input().split())

    if X>Y:
        print(X-Y)
    else:
        print(0)
        
    t = t-1


