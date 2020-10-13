while True :
    n = int(input())
    if n == 0 :
        break
    else :
        arr = input().split()
        check = True
        for i in range(n) :
            if int(arr[int(arr[i]) - 1]) != i + 1 :
                check = False
        if check :
            print('ambiguous')
        else :
            print('not ambiguous')