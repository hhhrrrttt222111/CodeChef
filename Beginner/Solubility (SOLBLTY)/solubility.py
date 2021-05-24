for _ in range(int(input())):
    x,a,b = map(int,input().split())
    ans = a + ((100 - x) * b)
    print(ans*10)