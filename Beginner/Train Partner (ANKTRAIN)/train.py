t = int(input())

while t:
    N = int(input())
    n = N%8

    if(n==0):
        print(N-1,"SL",sep="")
    elif(n==7):
        print(N+1,"SU",sep="")
    elif(n==1):
        print(N+3,"LB",sep="")
    elif(n==4):
        print(N-3,"LB",sep="")
    elif(n==2):
        print(N+3,"MB",sep="")
    elif(n==5):
        print(N-3,"MB",sep="")
    elif(n==3):
        print(N+3,"UB",sep="")
    elif(n==6):
        print(N-3,"UB",sep="")

    t = t-1