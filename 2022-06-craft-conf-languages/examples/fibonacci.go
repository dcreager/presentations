package main

import "fmt"

func fib(x int) int {
	a := 0
	b := 1
	for i := 0; i < x; i++ {
		next := a + b
		a = b
		b = next
	}
	return a
}

func main() {
	fmt.Println(fib(10))
}
