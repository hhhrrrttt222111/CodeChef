n = input()


def dec_inc(num):
    # Increment num by 1, if divisible by 4. Else decrement by 1.

        if num%4 == 0:
            num += 1
            print(num)
        else:
            num -= 1
            print(num)

# Input Validation below, checking for int(n)
try:
    dec_inc(int(n))



except: # Error message if int(n) == False
    print('\nInvalid input - please enter an integer.') 