T = int(input())

for i in range(T):
    N = int(input())
    
    S = list(map(int, input().split()[:N]))

    suma = 0

    for j in range(N - 1):
        suma += abs(S[j + 1] - S[j]) - 1
    
    print(suma)