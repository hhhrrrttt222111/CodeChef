import math
a,b=map(int,input().split())
k=0
for i in range(1,a+1):
    for j in range(1,b+1):
        x=math.sqrt(i*i+j)
        if x-int(x)==0:
            k=k+1
print(k)