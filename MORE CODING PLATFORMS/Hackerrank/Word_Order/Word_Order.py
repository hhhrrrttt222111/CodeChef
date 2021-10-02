final=[]
from collections import Counter
for _ in range(int(input())):
    final.append(input())
count=dict(Counter(final))
main=[]
print(len(count.keys()))
for i in count.values():
    main.append(i)
print(*main)