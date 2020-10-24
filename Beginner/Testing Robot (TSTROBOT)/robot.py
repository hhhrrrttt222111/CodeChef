t = int(input())

while t:
    N, X = map(int, input().split())
    S = input()
    arr = []
    arr.append(X)

    for i in S:
        if i=='R':
            X += 1
            arr.append(X)
        
        if i=='L':
            X -= 1
            arr.append(X)
    
    arr = set(arr)
    print(len(arr))

    t = t-1
        