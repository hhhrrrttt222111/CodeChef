(a,b) = map(str,input().split())
value = ''
while len(a) > 0:
    if int(a[-1]) + int(b[-1]) > 10:
        a = a[:len(a)-1]
        b = b[:len(b)-1]
        print(a)
        print(b)
        value += str(int(a[-1]) + int(b[-1]))
print(value)
