t = int(input())

for i in range(t):
    n = int(input())
    arr = []
    for x in range(n):
        a = [int(x) for x in input().split()] 
        arr.append(a)
    
    for x in range(n-2, -1, -1):
        for y in range(0, x+1):
            arr[x][y] = arr[x][y] + max(arr[x+1][y], arr[x+1][y+1])
    print(arr[0][0])