t = int(input())


while t:
    n = int(input())
    arr = [int(x) for x in input().split()]
    
    print(min(arr) * (len(arr) - 1))

    t = t-1