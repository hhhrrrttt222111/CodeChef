from math import floor
def count_num(n):
    count=0
    while(n>0):
        count=count+1
        n=n//10
    return count


round = int(input())
output=[]
for i in range(round):
    a, b, *rest = [int(e) for e in input().split()]
    n1 = a//9
    n2 = b//9
    if(n1<n2):
        # print("0",count_num(a))
        output.append(f"0 {count_num(a)}")
    else:
        output.append(f"1 {count_num(b)}")

for line in output:
    print(line)