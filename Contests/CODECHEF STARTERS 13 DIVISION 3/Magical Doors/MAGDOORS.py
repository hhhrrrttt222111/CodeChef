for tc in range(int(input())):
    s=list(input())
    change=0
    c=0
    i=0
    while(i!=len(s)):
        if change%2==0:
            if s[i]=='0':
                c+=1
                change+=1
        else:
            if s[i]=='1':
                c+=1
                change+=1   
        i+=1
    print(c)