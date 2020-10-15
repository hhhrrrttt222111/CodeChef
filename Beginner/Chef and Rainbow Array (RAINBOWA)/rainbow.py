t = int(input())


while t:
    n = int(input())
    a = list(map(int,input().split()))
    r = {1,2,3,4,5,6,7}                        
    d = a[::-1]      
    if a == d and set(a) == r:
        print('yes')
    else:
        print('no')

    t = t-1