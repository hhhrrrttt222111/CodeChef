for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    ans = a[0]-a[1]
    for i in range(1,n-1):
        m = a[i]-a[i+1]
        if ans > m : ans = m
    print(ans)