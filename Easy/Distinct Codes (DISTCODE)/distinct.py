t = int(input())
l = [input() for i in range(t)]
for code in range(len(l)):
    check = []
    for i in range(len(l[code])):
        if i < len(l[code]) - 1:
            value = l[code][i]+l[code][i+1]
            if value not in check:
                check.append(value)
    print(len(check))

