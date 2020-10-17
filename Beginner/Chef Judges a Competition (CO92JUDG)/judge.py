t = int(input())

while t:
    N = int(input())

    A = list(map(int, input().split()))
    B = list(map(int, input().split()))

    A.sort()
    B.sort()
    A.pop()
    B.pop()

    if sum(A) > sum(B):
        print('Bob') 
    elif sum(A) < sum(B):
        print('Alice') 
    else:
        print('Draw') 

    t = t-1