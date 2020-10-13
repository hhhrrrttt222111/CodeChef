t = int(input())

def convertArray(i):
    arr=[]
    while i>0: 
        rem = i % 10
        i = int(i / 10) 
        arr.append(rem)
    return arr
    
while t:
    n = int(input())
    l = convertArray(n)
    print(l[0] + l[-1])
    t = t-1
