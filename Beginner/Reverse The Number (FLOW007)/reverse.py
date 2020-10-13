t = int(input())

num = 0

for i in range(t):
    a = int(input())
    while a:
        digit = a % 10
        num = num*10 + digit
        a = a // 10
    print(num)
    num = 0