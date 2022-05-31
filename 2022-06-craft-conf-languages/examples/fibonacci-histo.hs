fib x = histo step x
  where step []      = 0
        step (_:[])  = 1
        step (a:b:_) = a + b

histo f = head . go
  where go 0 = [f []]
        go x = let subvalues = go (x - 1) in f subvalues : subvalues

main = print (fib 50)
