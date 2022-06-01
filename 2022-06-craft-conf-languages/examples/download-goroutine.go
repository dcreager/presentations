package main

func Download(url string) error { return nil }

func DownloadFiles() error {
	go Download("https://a.example.com/a.csv")
	go Download("https://b.example.com/b.csv")
	go Download("https://c.example.com/c.csv")
	return nil
}

func main() {
	DownloadFiles()
}
