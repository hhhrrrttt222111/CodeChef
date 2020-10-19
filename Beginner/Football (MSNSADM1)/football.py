t = int(input())

while t:
    N = int(input())
    s = 0

    A = list(map(int, input().split()))
    B = list(map(int, input().split()))

    for i in range(len(A)):
        if s<(A[i]*20 - B[i]*10):
            s = A[i]*20 - B[i]*10

    print(s)

    t = t-1


