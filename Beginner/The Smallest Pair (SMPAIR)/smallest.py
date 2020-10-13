t = int(input())

arr = []
s = 0

while t:
    n = int(input())

    arr = [int(item) for item in input().split()] 
    arr.sort()
    print(arr[0] + arr[1])


    t = t-1