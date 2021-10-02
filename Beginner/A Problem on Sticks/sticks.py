t = int(input())

for i in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    s = set(l)
    print(len(s) - 1 if 0 in s else len(s))
