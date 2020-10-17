t = int(input())

while t > 0:
    t -= 1
    n = int(input())
    ans = 0
    for i in range(n):
        tmp = input().split(' ')
        ans += int(tmp[0]) - int(tmp[1])
    print(ans)