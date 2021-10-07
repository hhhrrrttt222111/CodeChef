t = int(input())
while t:
    t-=1
    x,y,z = list(map(int, input().split(' ')))
    if x==y+z or y==z+x or z==x+y:
        print('yes')
    else:
        print('no')
        