t = int(input())

while t:
    str1 = input()
    str2 = input()
    A = 0
    B = 0
    for i in range(len(str1)):
        if str1[i]=="?" or str2[i]=="?":
            B += 1
        elif str1[i]!=str2[i]:
            A += 1
            B += 1
    print(A,B)

    t = t-1