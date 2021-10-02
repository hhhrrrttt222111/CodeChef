# cook your dish here

# to run test cases
def TEST_FUNCTION():    
    N, K = map(int, input().split())
    string = input()
    check = 0
    count = 0
    for i in range(N):
        if count != K:
            if string[i] == '*':    # check for '*'
                count = count + 1
            else:
                count = 0
                continue
        else:
            check = 1
            break
    if count == K or check == 1:
        return "YES"
    else:
        return "NO"


Test = int(input())
for _ in range(Test):
    print(TEST_FUNCTION())

# April Challenge 2021 Division 3