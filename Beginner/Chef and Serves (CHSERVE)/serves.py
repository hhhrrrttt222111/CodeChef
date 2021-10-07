t = int(input())

while(t):
    t-=1
    input_text = [int(i) for i in input().split(' ')]
    p1, p2, k = input_text
    total = p1 + p2
    x = int(total/k)
    if x%2==0:
        print("CHEF")
    else:
        print("COOK")
