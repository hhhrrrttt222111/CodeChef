t = int(input())


while t:
    A = list(map(str,input().split()))
    B = list(map(str,input().split()))

    s = 0

    for i in A:
        if i in B:
            s = s+1
    
    if s >= 2:
        print('similar')
    else:
        print('dissimilar')

    t = t-1
