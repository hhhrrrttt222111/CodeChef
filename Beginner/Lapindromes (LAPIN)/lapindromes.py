t = int(input())

while t:
    str = input()
    l = int(len(str))
    h = int(l/2)
    c = 0

    if l%2 == 0:
        a = str[:h]
        b = str[h:]
    
    else:
        a = str[:h]
        b = str[h+1:]

    a = list(a)
    b = list(b)

    for j in a :
        if j in b :
            b.remove(j)
        else :
            c = 1
    if c == 0 :
        print('YES')
    else :
        print('NO')

    t = t-1