t = int(input())

while t:
    s = input()
    if len(set(s))==2:
        for j in range(0,len(s)-1):
            if s[j]==s[j+1]:
                print("NO")
                break
        else:
            print("YES")
    else:
        print("NO")