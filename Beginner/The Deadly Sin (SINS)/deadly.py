t = int(input())

while t:
    X, Y = map(int, input().split())

    while X>0 and Y>0 :
        if X>Y:
            if X%Y==0:
                X=Y  
                break
            X = X%Y   
        else:
            if Y%X==0:
                Y=X 
                break 
            Y = Y%X 
    print(X+Y)

    t = t-1