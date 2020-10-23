for _ in range(int(input())):
    n=int(input())
    a=list(map(int, input().split()))
    ans=0
    for i in a:
        ans^=i
    if(ans==0):
        print('First')
    else:
        if(n%2==0):
            print('First')
        else:
            print('Second')