t = int(input())

while t:
    N = int(input())
    A = []
    B = []

    for i in range(N):
        k = input()
        if i == 0:
            A.append(k)
        else:
            if k in A:
                A.append(k)
            else:
                B.append(k)

    if len(A) > len(B):
        print(A[0])
    elif len(A) < len(B):
        print(B[0])
    else:
        print("Draw")

    t = t-1