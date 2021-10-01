# cook your dish here
def horses(nums):
    nums.sort()
    # print(nums)
    max_diff = nums[1] - nums[0]
    for i in range(1, len(nums) - 1):
        max_diff = min(max_diff, nums[i+1] - nums[i])
    return max_diff


T = int(input())
for __ in range(T):
    n = int(input())
    nums = list(map(int, input().split(' ')))
    print(horses(nums))
