ply1 = 0
ply2 = 0

diff = 0

t = int(input())
while(t>0):
    x, y = map(int,input().split(" "))
    ply1 += x
    ply2 += y
    if(diff < ply1-ply2):
        p = 1
        diff = ply1-ply2
    if(diff < ply2-ply1):
        p = 2
        diff = ply2-ply1
    t -= 1
print(p, " ", diff)