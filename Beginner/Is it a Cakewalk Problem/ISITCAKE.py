t = int(input())

while t:
    c = 0
    for i in range(10):
        A = list(map(int, input().split()))
        for j in range(10):
            if A[j] <= 30:
                c = c+1
    
    if c>=60:
        print('yes')
    else:
        print('no')

    t = t-1
