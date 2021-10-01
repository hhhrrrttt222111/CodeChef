T = int(input())
for __ in range(T):
    n = int(input())
    l = list(map(int, input().split()))
    i = 0
    j = n-1
    flag = 1
    if l[i] != 1:
        flag = 0
    else:
        while i < j:
            if l[i] != l[j]:
                flag = 0
            if l[i]+1 != l[i+1] and l[i] != l[i+1]:
                flag = 0
                break
            i += 1
            j -= 1
        if l[i] != 7:
            flag = 0

    if flag:
        print("yes")
    else:
        print("no")
