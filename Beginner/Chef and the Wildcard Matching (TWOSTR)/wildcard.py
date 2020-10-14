t = int(input())


while t:
    a = input()
    b = input()
    c = 0
    for i in range(len(a)):
        if a[i]!='?' and b[i]!='?' :
            if a[i] != b[i]:
                c += 1
    if c==0:
        print('Yes')
    else:
        print('No')

    t = t-1