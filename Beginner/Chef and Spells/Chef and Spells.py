# cook your dish here
testcases = int(input())
list1 = []
for t in range(0,testcases):
    a,b,c = map(int,input().split())
    list1.append(a+b)
    list1.append(b+c)
    list1.append(a+c)
    print(max(list1))
    list1 = []
