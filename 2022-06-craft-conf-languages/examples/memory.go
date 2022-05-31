package main

import "fmt"

type Person struct {
	Name string
	Age  int
}

func NewPerson(name string, age int) *Person {
	return &Person{Name: name, Age: age}
}

func ProcessFamily() {
	me := NewPerson("Doug", 42)
	fmt.Printf("%s is %d years old\n", me.Name, me.Age)
}

func main() {
	ProcessFamily()
}
