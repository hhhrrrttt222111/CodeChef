try:
    for _ in range(int(input())):
        N = int(input())

        k = 1
        for i in range(N):
            L = [None] * N
            if i & 1 == 0:
                for x in range(N):
                    L[x] = k
                    k += 1
            else:
                for x in range(N):
                    L[N - x - 1] = k
                    k += 1

            print(*L)


except Exception as e:
    print(e.__class__)