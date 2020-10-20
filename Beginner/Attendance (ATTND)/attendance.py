t = int(input())


while t:
    N = int(input())
    A = []
    B = []

    for i in range(N):
        X, Y = map(str,input().split())
        A.append(X)
        B.append(Y)

    for j in range(N):
        if A.count(A[j]) > 1:
            print(A[j] + " " + B[j])
        else:
            print(A[j])

    t = t-1

        
