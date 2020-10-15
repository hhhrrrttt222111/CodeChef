t = int(input())

while t:
    A, B, N = map(int, input().split())

    while N:
        if N%2 != 0:
            A = A*2
        else:
            B = B*2
        N = N-1

    print(int(max(A, B)/min(A, B)))
    
    t = t-1