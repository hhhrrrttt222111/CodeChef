t = int(input())


while t:
    num=input()
    if num.count(str(0))==1:
        print("Yes")
    elif num.count(str(1))==1:
        print("Yes")
    else:
        print("No")
    
    t = t-1