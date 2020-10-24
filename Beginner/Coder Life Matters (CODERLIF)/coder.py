t = int(input())


while t:
    A = list(map(int, input().split()))
    c = 0

    for i in A:
        if i==1:
            c = c+1
        else:
            c = 0
        if c>5:
            print('#coderlifematters')
            break
    
    if c<6:
        print('#allcodersarefun')

    t = t-1

