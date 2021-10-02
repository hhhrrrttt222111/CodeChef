
A, N, K = map(int, input().split(' '))
N += 1

for i in range(K):
    print(A%N, end=" ")
    A = A // N
