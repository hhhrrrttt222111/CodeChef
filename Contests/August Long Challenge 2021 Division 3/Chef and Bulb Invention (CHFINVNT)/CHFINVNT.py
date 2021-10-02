# August Long Challenge 2021- Division 3- Chef and Bulb Invention (CHFINVNT)

T = int(input())

for _ in range(T):
    N, p, K = map(int, input().split())
    result = 0

    count1 = p % K - 1
    count2 = ((N - 1) // K) * K
    count2 = N - 1 - count2

    if count1 > count2:
        result += (count2 + 1) * ((N - 1) // K + 1) + (count1 - count2) * ((N - 1) // K)
    else:
        result += ((N - 1) // K + 1) * (count1 + 1)

    for i in range(count1 + 1, N, K):
        result += 1
        if i == p:
            print(result)
            break
