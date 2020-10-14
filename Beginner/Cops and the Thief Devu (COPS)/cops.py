t = int(input())

while t:
    m, x, y = [int(x) for x in input().split()]
    
    arr = [int(x) for x in input().split()]
    arr.sort()
    
    p = x*y
    
    C = 0
    
    if((arr[0]-1) > p):
        C += arr[0] - 1 - p
    for i in range(len(arr)):
        if(i == len(arr) - 1):
            if((100-arr[i]) > p):
                C += 100 - arr[i] - p
        else:
            if((arr[i+1] - arr[i] - 1) > (2 * p)):
                C += arr[i+1] - arr[i] - 1 - (2 * p)
    
    print(C)

    t = t-1