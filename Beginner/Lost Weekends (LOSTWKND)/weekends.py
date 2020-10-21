t = int(input())


while t:
    A1 , A2, A3, A4, A5 , P=map(int,input().split())
    s = (A1 + A2 + A3 + A4 + A5)*P
    C = "No"
    if s>120:
        C ="Yes"
    print(C)

    t = t-1