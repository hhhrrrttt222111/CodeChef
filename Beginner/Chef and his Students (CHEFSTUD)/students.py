t = int(input())

while t:
    s = list(input())
    c = 0

    for i in range(len(s)):
        if s[i]==">":
            s[i]="<"
        elif s[i]=="<":
            s[i]=">"
        else:
            pass
    
    for i in range(len(s)-1):
        if s[i]==">" and s[i+1]=="<":
            c+=1
        else:
            pass
    print(c)
    
    t-=1    