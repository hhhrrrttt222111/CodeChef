t = int(input())


while t:
    N, K = map(int, input().split())

    arr = list(map(int, input().split()))

    for i in arr:
        if i>K:
            print(0, end='')
        else:
            print(1, end='')
            K = K-i
    print()
    t = t-1