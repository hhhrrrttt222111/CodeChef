for _ in range(int(input())):
    m,h = map(int,input().split())
    bmi = m / (h ** 2)
    if bmi <= 18:
        print(1)
    elif bmi > 18 and bmi < 25:
        print(2)
    elif bmi > 24 and bmi < 30:
        print(3)
    elif bmi >= 30:
        print(4)