t = int(input())

while t:
    N, K = map(int,input().split())
    A = list(map(int,input().split()))
    A.sort()
    s = 0
    for j in range(K,len(A)-K):
        s += A[j]
    print(s/(len(A)-(K*2)))

    t = t-1