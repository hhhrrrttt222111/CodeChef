# cook your dish here
for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    flag = tmp = 0
    for i in l:
        if(i%2 == 1):
            flag += 1
        else:
            tmp += 1
    tt = min(flag, n//2) + min(tmp, (n + 1)// 2)
    print(tt)