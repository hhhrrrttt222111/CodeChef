import numpy as np
try:
    n,q=map(int,input().split())
    arr=np.zeros(n,dtype=bool)
    for i in range(q):
        t,a,b=map(int,input().split())
        if t==0:
            arr[a:b+1]=~arr[a:b+1]
        else:
            print(np.count_nonzero(arr[a:b+1]))
except:
    pass
