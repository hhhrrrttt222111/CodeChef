t = int(input())

while t:
    N = int(input())
    A = list(map(int, input().split()))
    s = 0

    for i in range(N):
        for j in range(i+1, N):
            P = A[i]*A[j]
            a = 0
            while(P!=0):
                a+=P%10
                P = P//10
            if s<a:
                s = a
    
    print(s)

    t = t-1