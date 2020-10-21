try:
    t=int(input())
    for i in range(t):
        n=int(input())
        a=list(map(int,input().split()))
        set1=list(set(a))
        print(len(set1))
except:
    pass