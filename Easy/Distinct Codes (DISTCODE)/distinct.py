t = int(input())
l = []
for i in range(t):
    a = input()
    l.append(a)
for code in range(len(l)):
    check = []
    for i in range(len(l[code])):
        if i < len(l[code]) - 1:
            if (l[code][i]+l[code][i+1]) not in check:
                check.append(l[code][i]+l[code][i+1])
    print(len(check))
        

    

