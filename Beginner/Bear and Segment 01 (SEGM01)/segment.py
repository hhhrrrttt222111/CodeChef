t = int(input())


while t:
    S = input().strip("0")

    if "0" not in S and "1" in S:    
        print("YES")
    else:   
        print("NO")

    t = t-1