S = input()
t = int(input())

while t:
    x = True
    word = input()
    for i in word:
        if i not in S:
            x = False
    if(x):
        print('Yes')
    else:
        print('No')

    t = t-1