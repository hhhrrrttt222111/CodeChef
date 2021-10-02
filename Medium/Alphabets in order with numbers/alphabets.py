def alpha(a):
    c = 0
    for i in range(len(a)):
        if i==ord(a[i])-97 or i==ord(a[i])-65:
            c+=1
    return c

a = input()
print(alpha(a))
