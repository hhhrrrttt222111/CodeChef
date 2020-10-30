t = int(input())
for _ in range(t):
    s = input()
    n = len(s)
    count = 0
    for i in range(n-3):
        g = s[i:i+4]
        if(g.count('c')==1 and g.count('h')==1 and g.count('e')==1 and g.count('f')==1):
            count+=1
    if(count==0):
        print("normal")
    else:
        print("lovely ",count)
