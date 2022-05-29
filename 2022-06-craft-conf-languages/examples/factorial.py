def factorial(x):
    result = 1
    for factor in range(1, x+1):
        result = result * factor
    return result

print(factorial(10))
