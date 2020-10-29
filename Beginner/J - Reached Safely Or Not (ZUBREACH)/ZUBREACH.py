t = int(input().strip()) # no. of cases read in
h = 1

while h<=t:
# loop over case inputs

    # read in case inputs
    m, n = input().strip().split()
    rx, ry = input().strip().split()
    o = int(input())
    s = list(input())

    x = 0
    y = 0

    for i in s:
        # loop over instructions, calculate x and y coordinates

        if i=='L':
            x -= 1

        elif i=='R':
            x += 1

        elif i=='U':
            y += 1

        elif i=='D':
            y -= 1

    case1 = "REACHED"
    case2 = "SOMEWHERE"
    case3 = "DANGER"

    # print result based on x and y coordinate in comparison to rx and ry
    if x > int(m) or y > int(n):
        print(f"Case {h}: {case3}")

    elif x < 0 or y < 0:
        print(f"Case {h}: {case3}")

    elif x==int(rx) and y==int(ry):
        print(f"Case {h}: {case1}")

    else:
        print(f"Case {h}: {case2}")
    

    h += 1