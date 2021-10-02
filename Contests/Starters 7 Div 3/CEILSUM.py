import math
t = int(input())
for i in range(1,t+1):
    a,b = map(int, input().strip().split())
    s = []
    if (a!=b):
        for x in range(a,a+2):
            first = math.ceil((b-x)/2)
            part = math.ceil((x-a)/2)
            sum = (first+part)
            s.append(sum)
        print(max(s))
    else:
        print(0)