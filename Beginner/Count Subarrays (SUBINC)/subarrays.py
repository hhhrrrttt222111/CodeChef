t = int(input())

while t:
    N = int(input())
    c=0
    r=0

    arr = list(map(int, input().split()))

    for i in range(1,N):
        if arr[i]>=arr[i-1]:
            c = c+1
        else:
            c = 0
        r = r+c
    print(r+N)

    t = t-1
