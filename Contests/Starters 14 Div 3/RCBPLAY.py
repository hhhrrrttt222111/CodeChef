for _ in range(int(input())):
    x,y,z=[int(i) for i in input().split()]
    if x+(2*z)>=y:
        print('YES')
    else:
        print('NO')