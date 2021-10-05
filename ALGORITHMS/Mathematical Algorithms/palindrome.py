#Return True if a number is palindrome else return False
def palindrome(n):
    def count_digits(n):
        if n < 10 and n >= 0:
            return 1
        else:
            return 1+count_digits(n//10)

    all_digits = []  # list to store individual extracted digits
    num_digits = count_digits(n)  # count number of digits using above function

    while num_digits > 1:  # extract individual digits
        all_digits.append(n % 10)
        n = n // 10
        num_digits = num_digits-1
    all_digits.append(n)

    for i in range(len(all_digits)//2):
        if all_digits[i] != all_digits[-(i+1)]:
            return False
            break
        else:
            return True
