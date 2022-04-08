import math

# finds the greatest common divider of two integers
def gcd(a, b):
    if a == 0:
        return b
    return gcd(b%a, a)

#checks if an array a contains any multiples of g.
def containMult(g, a):
    dup = False
    for i in a:
        if i % g == 0:
            dup = True
            break
    if dup:
        return 0
    else:
        return g

#checks if if the gcd of the second array is 1 or not.
def checkArrayTwo(g, b, a):
    g = b[0]
    for i in b[1:]:
        g = gcd(g, i)
    if g == 1:
        return 0
    else:
        return containMult(g, a)



t = int(input())
while t > 0:
    n = int(input())
    a = []
    b = []
    c = 0
    for i in input().split():
        if c % 2 == 0:
            a.append(int(i))
        else:
            b.append(int(i))
        c += 1
    g = a[0]
    for i in a[1:]:
        g = gcd(g, i)
    if g == 1:
        print(checkArrayTwo(g, b ,a))
    else:
        k = containMult(g, b)
        if k == 0:
           print(checkArrayTwo(g, b ,a))
        else:
            print(k)
    t -= 1
