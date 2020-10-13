t = int(input())

arr = []

while t:
    a, b, c = map(int, input().split(" "))
    arr.clear()
    arr.append(a)
    arr.append(b)
    arr.append(c)
    arr.sort()
    print(arr[1])

    t = t-1