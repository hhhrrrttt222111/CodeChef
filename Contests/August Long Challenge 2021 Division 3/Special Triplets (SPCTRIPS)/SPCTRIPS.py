# August Long Challenge 2021- Division 3- Special Triplets (SPCTRIPS)

T = int(input())

N = 10 ** 5  # SINCE N UPPERBOUND IS 10**5
list1 = [0] * (N + 1)
for i in range(1, N // 2 + 1):
    for j in range(i, N + 1, i):
        if j % i == 0:
            for k in range(i, N + 1, j):
                if k % j == i:
                    if k > j:
                        list1[k] += 1
                    else:
                        list1[j] += 1

for _ in range(T):
    N = int(input())
    print(sum(list1[:N + 1]))
    