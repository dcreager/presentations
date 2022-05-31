package main

import "fmt"

type Person struct {
	Name string
	Age  int
}

func ProcessFamily() {
	me := Person{Name: "Doug", Age: 42}
	fmt.Printf("%s is %d years old\n", me.Name, me.Age)
}

func main() {
	ProcessFamily()
}
