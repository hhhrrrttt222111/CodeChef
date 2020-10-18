t = int(input())
V = ['a', 'e', 'i', 'o', 'u']

while t:
    N = int(input())
    S = input()
    c = 0

    for i in range((len(S)-1)):
        if (S[i] not in V) and (S[i+1] in V):
            c = c+1
    
    print(c)

    t = t-1