t = int(input())


while t:
    N = int(input())
    c = 0

    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    S = list()

    S.append(A[0])

    for i in range(1, len(A)):
        S.append(A[i]-A[i-1])

    for j in range(len(B)):
        if S[j]>=B[j]:
            c +=1
    
    print(c)

    t = t-1
