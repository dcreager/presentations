package main

import "sync"

func Download(url string) error { return nil }

func DownloadFiles() error {
	var wg sync.WaitGroup
	var errA error
	var errB error
	var errC error
	go downloadOne("https://a.example.com/a.csv", &wg, &errA)
	go downloadOne("https://b.example.com/b.csv", &wg, &errB)
	go downloadOne("https://c.example.com/c.csv", &wg, &errC)
	wg.Wait()

	if errA != nil { return errA }
	if errB != nil { return errB }
	if errC != nil { return errC }
	return nil
}

func downloadOne(url string, wg *sync.WaitGroup, err *error) {
	wg.Add(1)
	defer wg.Done()
	*err = Download(url)
}

func main() {
	DownloadFiles()
}
