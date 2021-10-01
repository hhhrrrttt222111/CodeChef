# cook your dish here

t = int(input())

for i in range(t):
    a, b, c, d, K = map(int, input().split())
    path = abs(c - a) + abs(b - d)
    if K == path:
        print("Yes")
    if path > K:
        print("No")
    if (K - path) % 2 == 1 and K > path:
        print("No")
    if (K - path) % 2 == 0 and K > path:
        print("Yes")
