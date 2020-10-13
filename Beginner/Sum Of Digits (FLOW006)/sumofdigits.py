tot = int(input())

for case in range(tot):
    s = 0
    n = int(input())
    for digit in str(n):
        s += int(digit)
    print(s)