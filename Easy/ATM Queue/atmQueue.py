import math

for t in range(int(input())):
	n, x = map(int, input().split())
	ai = list(map(int, input().split()))
	ans = []
	d = []
	for i in range(n):
		d.append([(math.ceil(ai[i] / x)), i + 1])
	d.sort()
	for i in d:
		ans.append(i[-1])

	print("Case #{}:".format(t + 1), *ans)
