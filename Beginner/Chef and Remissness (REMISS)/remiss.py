t = int(input())

while t:
    a, b = map(int, input().split(" "))
    
    if a>b:
        print(a, a+b)
    elif a<b:
        print(b, a+b)
    else:
        print(a, b)

    t = t-1
    