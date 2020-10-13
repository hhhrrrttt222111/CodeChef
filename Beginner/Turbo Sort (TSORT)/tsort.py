t = int(input())
arr = []
while(t):
    n = int(input())
    arr.append(n)
    t = t-1
 
arr.sort()

for i in arr:
    print(i)