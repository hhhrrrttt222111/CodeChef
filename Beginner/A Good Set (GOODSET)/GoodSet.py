# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    a=list()
    b=1
    for i in range(n):
        a.append(b)
        b+=2
    print(*a)