t = int(input())

while t:
    S = input()

    a = S.count('a')
    b = S.count('b')

    if a>b:
        print(a)
    else:
        print(b)

    t = t-1