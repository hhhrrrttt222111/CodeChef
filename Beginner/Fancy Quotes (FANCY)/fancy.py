t = int(input())


while t:
    S = list(map(str, input().split(' ')))

    for i in S:
        if i == 'not':
            print('Real Fancy')
            break
    else:
        print('regularly fancy')

    t = t-1