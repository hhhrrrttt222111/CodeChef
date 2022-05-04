## 2 2 3 4 5
n = int(input())
nums = [0] * 100100 
arr = input().split(" ")
m = 0
for i in arr:
    nums[int(i)] += 1
    if int(i) > m:
        m = int(i)
dp = [0]*(m+2)
dp[1] = nums[1]
for i in range(2, m+1):
    dp[i] = max(dp[i-1], dp[i-2] + nums[i]*i)
print(max(dp[m-1], dp[m-2] + nums[m]*m))