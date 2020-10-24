t = int(input())

while t:
    N, K = map(int, input().split())
    s = input()

    l = 0
    u = 0

    for i in s:
        if(i.isupper()):
            u += 1
        else:
            l += 1
    
    if(l<=K and u<=K):
        print('both')
    elif(l<=K and u>K):
        print('brother')
    elif(l>K and u<=K):
        print('chef')
    else:
        print('none')

    t = t-1