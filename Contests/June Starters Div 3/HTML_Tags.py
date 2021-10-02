import re
p = re.compile('<\/[a-z0-9]+>')
t = int(input())
for i in range(1,t+1):
    mystr = input()
    if p.match(mystr):
        print("Success")
    else:
        print("Error")