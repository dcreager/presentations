package main

import "os"

func SaveFile(filename string) error {
	fp, err := os.Open(filename)
	if err != nil {
		return err
	}
	defer fp.Close()

	_, err = fp.WriteString("lots of interesting data")
	if err != nil {
		return err
	}

	return nil
}

func main() {
	SaveFile("out.dat")
}
