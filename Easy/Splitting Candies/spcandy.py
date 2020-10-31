testcase = int(input())

for _ in range(testcase):
    line = input().split(" ")
    n, k = [int(x) for x in line]
    string = ""
    if k == 0:
        string = '{} {}'.format(0, n)
    else:
        string = '{} {}'.format(n // k, n % k)

    print(string)
