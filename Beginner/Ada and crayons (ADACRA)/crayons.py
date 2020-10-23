t = int(input())


while t:
    S = input()

    c=0
    for i in range(len(S)-1):
        if S[i]!=S[i+1]:
            c+=1
    if c%2==0:
        print(c//2)
    else:
        print((c//2)+1)

    t = t-1