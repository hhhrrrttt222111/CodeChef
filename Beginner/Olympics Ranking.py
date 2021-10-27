T = int(input())
for i in range(0,T):
    ls = list(map(int, input().split()))
    ls1 = ls[:len(ls)//2]
    ls2 = ls[len(ls)//2:]
    if(sum(ls1)>sum(ls2)):
        print("1")
    else:
        print("2")
