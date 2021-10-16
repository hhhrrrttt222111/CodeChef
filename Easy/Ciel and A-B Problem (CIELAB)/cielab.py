import random

text_inp = input()
A, B = text_inp.split(' ')

ans = int(A) - int(B)

# We change the digit at this index
# to a random digit from 1 to 9
rand_digit = random.randrange(0, len(str(ans)))
dig_to_change = int(str(ans)[rand_digit])

new_dig = dig_to_change

while not new_dig != dig_to_change:
    new_dig = random.randrange(1, 9)

solution = list(str(ans))
solution[rand_digit] = str(new_dig)
solution = ''.join(solution)
print(solution)