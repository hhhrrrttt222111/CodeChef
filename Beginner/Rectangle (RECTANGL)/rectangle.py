t = int(input())


while t:
    rect = list(map(int, input().split()))
    rect.sort()

    if rect[1]==rect[0] and rect[2]==rect[3]:
        print("YES")
    else:
        print("NO")

    t = t-1

