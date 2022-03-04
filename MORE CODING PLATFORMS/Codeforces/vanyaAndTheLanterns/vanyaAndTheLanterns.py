# 0 3 5 7 9 14 15



from operator import index


arr = input().split()
n = int(arr[0])
l = int(arr[1])
indexes = [int(i) for i in input().split()]
indexes.sort()
diff = max(indexes[0], l-indexes[-1])
for i in range(len(indexes)-1):
    a = indexes[i+1] - indexes[i]
    if a > diff:
        diff = a
print("{:.10f}".format(diff/2))