from math import sqrt

t = int(input())

for i in range(t):
    x = input()
    P = int(x.split(" ")[0])
    S = int(x.split(" ")[1])
    b = (P-sqrt((P*P-24*S)))/12
    v = b*(S/2-P*b/4+b*b)
    print(f'{v:.2f}')