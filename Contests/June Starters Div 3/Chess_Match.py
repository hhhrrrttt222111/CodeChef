n = int(input())
for i in range(1,n+1):
    n,a,b = map(int, input().split())
    x = (2*(180+n))
    y = a + b
    z = x-y
    print(z)
    