t = int(input())

while t:
    N, B = map(int, input().split())

    area = [0]
    for i in range(N):
        W, H, P = map(int, input().split())
        if P <= B:
            area.append(int(W*H))
    if max(area) > 0:
        print(max(area))
    else:
        print('no tablet')

    t = t-1