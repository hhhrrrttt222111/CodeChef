t = int(input())

even = 0
odd = 0

sol = list(map(int, input().strip().split()))[:t]

for i in range(len(sol)):
    if sol[i] % 2 == 0:
        even = even + 1
    else:
        odd = odd + 1

if even > odd:
    print('READY FOR BATTLE')
else:
    print('NOT READY')