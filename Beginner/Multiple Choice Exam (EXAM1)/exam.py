t = int(input())

while t :
    N = int(input())
    S = input()
    U = input()
    
    i = 0
    c = 0
    while i < N : 
        if U[i] != 'N' :
            if U[i] == S[i] :
                c += 1
                i += 1
            elif U[i] != S[i] :
                i += 2
        else:
            i += 1
    print(c)
    
    t -= 1
