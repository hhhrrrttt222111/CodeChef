# August Long Challenge 2021- Division 3- Olympics Ranking (OLYRANK)

T = int(input())

for _ in range(T):
    G1, S1, B1, G2, S2, B2 = map(int, input().split())
    sum_1 = G1 + S1 + B1
    sum_2 = G2 + S2 + B2
    if sum_1 > sum_2:
        print(1)
    else:
        print(2)
