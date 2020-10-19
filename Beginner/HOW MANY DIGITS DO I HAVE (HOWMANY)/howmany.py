num = input("Give me input-->")

digits = 0

for i in range(len(num)):
    digits = digits + 1

    if digits ==1:
        print("Your input has 1 digit")

    elif digits ==2:
            print("Your input has 2 digits")

    elif digits ==3:
            print("Your input has 3 digits")

    else :
        print("Your input has more than 3 digits")