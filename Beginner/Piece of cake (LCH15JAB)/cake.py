t = int(input())

while t:
    n = str(input())
    for i in list(n):
        if n.count(i) == (len(n)-n.count(i)):
            print("YES")
            break
    else:
        print("NO")

    t = t-1