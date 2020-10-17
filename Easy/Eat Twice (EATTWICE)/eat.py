t = int(input())
while t > 0:
    t -= 1
    tmpText1 = input()
    n = int(tmpText1.split(" ")[0])
    m = int(tmpText1.split(" ")[1])
    arr = [0 for i in range(m)]
    for i in range(n):
        tmpText2 = input()
        d = int(tmpText2.split(" ")[0])
        v = int(tmpText2.split(" ")[1])
        if arr[d-1] < v:
            arr[d-1] = v
    arr.sort()
    tot = arr[m-2] + arr[m-1]
    print(tot)
