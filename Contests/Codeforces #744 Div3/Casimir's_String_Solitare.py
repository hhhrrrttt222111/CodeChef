from collections import Counter
for _ in range(int(input())):
    inp=input()
    s=dict(Counter(list(inp)))
    a,b,c=0,0,0
    for i,j in s.items():
        if i=='A':
            a=j
        elif i=='B':
            b=j
        else:
            c=j
    if a+c==b:
        print('YES')
    else:
        print('NO')