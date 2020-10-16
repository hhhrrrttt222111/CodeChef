for t in range(int(input())):
    n, k = map(int, input().split())
    nums = list(map(int, input().split()))
    atmBalance = k
    result = []
    cur = 0
    while atmBalance > 0 and cur < (len(nums) - 1):
        if nums[cur] < atmBalance:
            atmBalance -= nums[cur]
            cur += 1
            result.append(1)
        else:
            result.append(0)
    for i in result:
        print(i)