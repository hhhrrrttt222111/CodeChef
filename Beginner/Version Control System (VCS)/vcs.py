t = int(input())

while t:
    N, M, K = map(int, input().split())
    ti = 0
    uu = 0

    A = input().split()
    B = input().split()

    for j in range(1,N+1):
        if str(j) not in A and str(j) not in B:
            ti+=1
        if str(j) in A and str(j) in B:
            uu+=1

    print(uu, ti)


    t = t-1
