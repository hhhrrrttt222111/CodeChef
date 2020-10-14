N, K = map(int, input().split())
a = []

while K:
   
    arr = list(input().split())
    if len(arr) == 1:
        a.clear()
        print(0)
    else:
        if arr[1] in a:
            a.remove(arr[1])
            print(len(a))
        else:
            a.append(arr[1])
            print(len(a))

    K = K-1
        
