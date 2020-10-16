t = int(input())


while t:
    N = int(input()) 
    col = list(input())

    r = col.count('R')
    g = col.count('G')
    b = col.count('B')

    s = max(r, b, b)

    print(N-s)

    t = t-1