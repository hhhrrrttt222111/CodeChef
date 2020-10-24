t = int(input())

while t:
    N = int(input())
    dis=0.0

    for j in range (0,N):
        P, Q, D = map(float,input().split())
        p = P
        p = p+(p*(D/100))

        p = p-(p*(D/100))

        loss = (P-p)*Q
        dis = dis+loss
    print(dis)

    t = t-1