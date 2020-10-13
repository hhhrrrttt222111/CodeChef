t = int(input())

while t:
    a, b, c = map(int, input().split(" "))
    sum = a + b+ c

    if sum == 180:
        print('YES')
    else:
        print('NO')

    t = t-1