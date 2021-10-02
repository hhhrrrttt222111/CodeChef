
n = int(input("Number of tests: "))

for c in range(0, n, 1):
    q = int(input("Number of characters: "))
    l = input("Characters: ")
    c = int(l.count('1')*(l.count('1')+1)/2)
    print("Result: ", c)
