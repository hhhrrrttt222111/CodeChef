t = int(input())


while t:
    arr = []
 
    S = input().split()
    if(len(S)==1):
        print(S[0].capitalize())
    else:
        for i in range(len(S)):
            arr.append(S[i].capitalize())
        for i in range(len(S)-1):
            print(arr[i][0]+'.',end=' ')
        print(S[len(S)-1].capitalize())

    t = t-1
