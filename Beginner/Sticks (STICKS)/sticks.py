t = int(input())

while t:
    N = int(input())
    L = list(map(int,input().split()))
    D = dict()
    for i in range(N):
        if L[i] not in D:
            D[L[i]]=1
        else:
            D[L[i]]+=1
            
    arr = list(D.keys())
    c = 0
    
    for key,value in D.items():
        if value>1:
            c+=1
    if True:
        arr.sort(reverse=True)
        if D[arr[0]]>3:
            print(arr[0]*arr[0])
        elif len(arr)<2:
            print("-1")
        else:
            print(arr[0]*arr[1])

    t -= -1
        
