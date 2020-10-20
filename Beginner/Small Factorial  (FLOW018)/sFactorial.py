
def factorial(n):
    '''
    Returns the factorial of n
    Requires:
    0 <= n <= 20

    '''
    result = 1
    if n == 0:
        return result
    else:
        for i in range(1, n+1):
            result = result * i
            
    return result

num_test = int(input())
for _ in range(num_test):
    num = int(input())
    result = factorial(num)
    print(result)


