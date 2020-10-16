t = int(input())
for _ in range(t):
    n = int(input())
    if n < 1500:
        print(n+(n*(0.1+0.9)))
    else:
        print(n+500+(n*.98))
