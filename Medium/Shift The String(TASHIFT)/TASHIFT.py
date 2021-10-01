n=int(input())
a=input()
c=input()
b=c+c
res=0
left=0
right=n-1
while(left<=right):
    mid=int((left+right)/2)
    d = a[:mid + 1]
    ans = b.find(d)
    if(ans==-1):
        right=mid-1
    else:
        left=mid+1
    if(res<ans):
        res=ans
print(res)
