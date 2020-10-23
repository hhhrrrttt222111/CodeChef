t = int(input())


while t:
    N = int(input())
    A = list(map(int, input().split()))

    print(min(A))

    t = t-1