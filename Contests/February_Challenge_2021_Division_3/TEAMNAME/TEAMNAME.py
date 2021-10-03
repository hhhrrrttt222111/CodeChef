for _ in range(int(input())):
    n=int(input())
    s=input().split()
    d,c={},0
    for i in s:
        b=i[1:]
        if b not in d:
            d[b]=[i[0]]
        else:
            d[b].append(i[0])
    lst=list(d.keys())
    for i in range(len(d)):
        for j in range(i+1,len(d)):
            l=len(set(d[lst[i]]+d[lst[j]]))
            c+=(l-len(d[lst[i]]))*(l-len(d[lst[j]]))
    print(2*c)
