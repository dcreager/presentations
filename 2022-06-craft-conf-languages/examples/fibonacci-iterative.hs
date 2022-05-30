fib x = fib' x 0 1
  where fib' 0 a b = a
        fib' x a b = fib' (x - 1) b (a + b)

main = print (fib 50)
