t = int(input())

while t:
    N = list(map(int, input().split()))

    N.remove(len(N)-1)
    print(max(N))

    t = t-1