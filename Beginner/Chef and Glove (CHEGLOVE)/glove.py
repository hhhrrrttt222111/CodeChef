t = int(input())

while t:
    N = int(input())
    L = list(map(int, input().split()))
    G = list(map(int, input().split()))

    a = 0
    b = 0
    for i in range(N):
        if L[i]>G[i]:
            a+=1
        if L[i]>G[N-1-i]:
            b+=1

    if a>0 and b>0:
        print('none')
    elif a==0 and b>0:
        print('front')
    elif a>0 and b==0:
        print('back')
    else:
        print('both')

    t = t-1