def fib(x):
    a = 0
    b = 1
    for i in range(0, x):
        a, b = b, a + b
    return a

print(fib(10))
