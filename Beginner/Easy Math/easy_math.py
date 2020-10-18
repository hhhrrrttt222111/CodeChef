t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int, input().split()))
    max_sum=0
    for j in range(n):
        for k in range(j+1, n):
            num=a[j]*a[k]
            add=0
            while(num!=0):
                add+=num%10
                num=num//10
            if max_sum<add:
                max_sum=add
    print(max_sum)
