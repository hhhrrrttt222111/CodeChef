t  =int(input())

while t:
    N = int(input())
    A = list(map(int, input().split()))

    i = A.index(min(A))
    j = A.index(max(A))

    if i > j:
        print(max(A), min(A))
    else:
        print(min(A), max(A))

    t = t-1