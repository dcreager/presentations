package main

import "errors"
import "fmt"

var InvalidDigit = errors.New("not a digit")

func ParseDigit(ch byte) (int, error) {
	if ch >= '0' && ch <= '9' {
		return int(ch - '0'), nil
	}
	return 0, InvalidDigit
}

func ParseFile(contents string) error {
	_, err := ParseDigit(contents[0])
	if err != nil {
		return err
	}
	return nil
}

func UseFile(contents string) {
	err := ParseFile(contents)
	if err != nil {
		print(err)
	}
}

func main() {
	i, err := ParseDigit('2')
	fmt.Printf("%d %v\n", i, err)
	i, err = ParseDigit('a')
	fmt.Printf("%d %v\n", i, err)
}
