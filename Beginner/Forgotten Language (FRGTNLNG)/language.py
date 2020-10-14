t = int(input())

while t:
    s = set()
    N, K = map(int,input().split())
    old = input().split()
    for _ in range(K):
        s.update(input().split())
    for word in old:
        if word in s:
            print("YES",end=' ')
        else:
            print("NO",end=' ')
    print('')

    t = t-1

    