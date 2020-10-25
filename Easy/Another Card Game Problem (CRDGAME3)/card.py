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
    num1, num2, *rest = [int(e) for e in input().split()]
    if(num1//9 < num2//9):
        output.append(f"0 {count_num(num1)}")
    else:
        output.append(f"1 {count_num(num2)}")

for line in output:
    print(line)