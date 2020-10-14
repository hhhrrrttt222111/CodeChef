t = int(input())

while t:
    a = int(input())

    count = 0
    i = 5

    while (a/i>=1): 
        count += int(a/i) 
        i *= 5

    print(count)

    t = t-1