t = int(input())
for i in range(t):
    l, r = map(int, input().split())
    prettynum = 0 
    for num in range(l, r + 1):
        num = str(num)
        if num[-1] == '2' or num[-1] == '3' or num[-1] == '9':
            prettynum += 1
    print(prettynum)