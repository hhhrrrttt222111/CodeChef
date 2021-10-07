t = int(input())
while t:
    t-=1
    n,k = list(map(int, input().split(' ')))
    arr = []
    for val in list(map(int, input().split(' '))):
        arr.append(val)
    sorted(arr)
    print(arr[int((n+k)/2)])

# 3
# 2 1
# 4 7
# 4 3
# 9 2 8 6
# 5 2
# 6 1 1 1 1
