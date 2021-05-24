T= int(input())
for i in range(T):
    Amin,Bmin,Cmin,Tmin,A,B,C = map(int,input().split())
    if ((Amin<=A) and (Bmin<=B) and (Cmin<=C) and (Tmin<=A+B+C)):
        print("YES")
    else:
        print("NO")