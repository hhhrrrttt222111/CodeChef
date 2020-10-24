t = int(input())

while t:
    N = list(map(int,input().split()))
    S = input()
    letters = "abcdefghijklmnopqrstuvwxyz"
    arr=[]

    for i in range(26):
        if letters[i] not in S:
            arr.append(N[i])
    print(sum(arr))

    t = t-1