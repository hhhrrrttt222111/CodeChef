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
    count = 0
    l = convertArray(n)
    for i in l:
        if i == 4:
            count = count + 1
    print(count)

    t = t-1
