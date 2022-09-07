# cook your dish here
t=int(input())
for i in range(t):
    x,y,z=map(int,input().split())
    if(x>y and x>z):
        print("Alice")
    if(y>z and y>x):
        print("Bob")
    if(z>y and z>x):
        print("charlie")