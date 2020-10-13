# cook your dish here
t = int(input())

for i in range(t):
    
    a = input()
    if a == a[::-1]:
        print("wins")
    else:
        print("loses")