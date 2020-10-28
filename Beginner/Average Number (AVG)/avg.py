import math
for i in range(int(input())):
    n,k,v=[int(x) for x in input().split()]
    a=[int(x) for x in input().split()]
    x=(v*(n+k)-sum(a))/k
    if x-math.floor(x)==0 and x>0:
        print(int(x))
    else:
        print(-1)
