package main

import "fmt"

func Factorial(x int) int {
	result := 1
	for factor := 1; factor <= x; factor++ {
		result *= factor
	}
	return result
}

func main() {
	fmt.Println(Factorial(10))
}
