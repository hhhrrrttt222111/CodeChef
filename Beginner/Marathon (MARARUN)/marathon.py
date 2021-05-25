for _ in range(int(input())):
    a = list(map(int,input().split()))

    value = a[0] * a[1]
    if value < 10:
        print(0)
    elif (value >= 10 and value < 21):
        print(a[2])
    elif value >= 21 and value < 42:
        print(a[3])
    else:
        print(a[4])
    