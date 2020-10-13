t=int(input())


while t:
    n = int(input())
    S = input()
    if "Y" in S:
        if S.count("Y") > S.count("I"):
            print("NOT INDIAN")
    elif "I" in S:
         print("INDIAN")
    else:
        print("NOT SURE")
    
    t = t-1
