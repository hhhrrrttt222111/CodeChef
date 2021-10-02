
A, N, K = map(int, input().split(' '))
N += 1

for i in range(K):
    print(A%N, end=" ")
    A = A // N



# a,n,k=map(int,input().split())
# n=n+1
# for i in range(k):
#     print(a%n,end=' ')
#     a=a//n
