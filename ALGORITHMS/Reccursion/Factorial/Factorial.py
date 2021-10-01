def factorial(n):
    if (n > 1):
         n *= factorial(n - 1)
    return n

n = int(input())

print(factorial(n))

# Complexity of the above program is O(n)