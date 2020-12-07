t = int(input())

for i in range(t):
    n, a, b, k = map(int, input().split())
    
    f = 0
    c = max(a, b)
    d = min(a, b)
    if c % d != 0:
        f = n//c + n//d - 2 * (n//(c*d))
    if c % d == 0:
        f = n//d - n//c
        
    if k <= f:
        print("Win")
    else:
        print("Lose")

