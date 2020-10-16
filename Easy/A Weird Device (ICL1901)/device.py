t = int(input())

for i in range(t):
    ans = 0
    k,n = map(int, input().strip().split(' '))
    a=k%10
    k=k/10
    b=k%10
    k=k/10
    c=k
    if a!=b and a!=c and b!=c :
        ans = 27
    elif a==b and b==c:
        ans=1
    
    elif a==b or a==c or b==c:
        ans=8
    
    print(ans)
