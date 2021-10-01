T = int(input())

for _ in range(T):
    xa, xb, Xa, Xb = map(int, input().split())
    print(int(Xa/xa + Xb/xb))
