testcase=int(input())
for _ in range(testcase):
    games=int(input())
    for _ in range(games):
        
        info=input().split()
        info=list(map(int, info))
        I, N, Q = info
        
        if N % 2 == 0 or I == Q:
            print(N // 2)
        else:
            print(N // 2 + 1)