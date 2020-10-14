t = int(input())

while t: 
    a, b = map(int, input().split())
    c = a + b
    for k in range(1, 1000):
        d = c+k
        prime = True 
        for j in range(2,d):
            if d%(j)==0:
                prime = False
                break
        if prime:
            print(d-c)
            break
    
    t = t-1

    

