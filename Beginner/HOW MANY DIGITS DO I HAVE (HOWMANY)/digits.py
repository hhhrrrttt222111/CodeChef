n = input()

d = 0

for i in range(len(n)):
    n = int(n)
    n = n/10
    d = d+1

if d==1:
    print(1)
elif d==2:
    print(2)
elif d==3:
    print(3)
else:
    print('More than 3 digits')