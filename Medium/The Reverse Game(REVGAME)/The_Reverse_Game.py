for _ in range(int(input())):
    n,k=map(int,input().split())
    def finalarr(n):
        arr=[0]*n 
        arr[0]=n-1
        for i in range(1,n):
            if i%2:
                arr[i]=n-1-arr[i-1]
            else:
                arr[i]=n-2-arr[i-1]
      #  print(arr)
        return arr
    arr=finalarr(n)
    print(arr.index(k))
