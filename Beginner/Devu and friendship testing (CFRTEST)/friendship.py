t = int(input())

while t:
    n = int(input())
    arr = list(map(int, input().split()))

    arr = set(arr)
    print(len(arr))

    t = t-1