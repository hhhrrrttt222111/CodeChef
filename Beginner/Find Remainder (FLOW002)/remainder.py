n = int(input())
arr = []

for i in range(n):
    a, b = input().split()
    a = int(a)
    b = int(b)
    rem = a%b
    arr.append(rem)

for i in range(n):
    print(arr[i])
