t = int(input())

for i in range(t) :
    a, b = map(int,input().split())
    for j in range(a) :
        sum = (b * (b + 1)) // 2
        b = sum
    print(sum)