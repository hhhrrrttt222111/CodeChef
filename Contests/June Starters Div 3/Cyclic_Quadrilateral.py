n = int(input())
for i in range(1,n+1):
    a,b,c,d = map(int, input().split())
    if (a+c==180 and b+d==180):
        print("YES")
    else:
        print("NO")