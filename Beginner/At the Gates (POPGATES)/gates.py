t = int(input())


while t:
    N, K = map(int, input().split())
    A = list(map(str,input().split()))

    for i in range(N-1,N-K-1,-1):
        x = A.pop()
        if x=='H':
            for j in range(i):
                if A[j]=='H':
                    A[j]='T'
                else:
                    A[j]='H'

    print(A.count('H'))

    t = t-1