t = int(input())

while t:
    N, S, E = map(int, input().split())

    x = (N*(2**(1/2)))/S
    y = 2*N/E

    if y<x:
        print("Elevator")
    else:
        print("Stairs")

    t = t-1