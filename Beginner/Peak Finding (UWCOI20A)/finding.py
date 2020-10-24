t = int(input())

while t:
    N = int(input())
    arr = []

    for i in range(N):
        arr.append(int(input()))

    print(max(arr))

    t = t-1