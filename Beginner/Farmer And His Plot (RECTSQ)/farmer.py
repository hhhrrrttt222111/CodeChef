import math


t = int(input())

while t:
    A, B=list(map(int,input().split()))
    area = A*B
    hcf = math.gcd(A,B)
    print(int(area/(hcf*hcf)))

    t = t-1