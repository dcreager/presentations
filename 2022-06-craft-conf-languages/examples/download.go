package main

func Download(url string) error { return nil }

func DownloadFiles() error {
	err := Download("https://a.example.com/a.csv")
	if err != nil {
		return err
	}

	err = Download("https://b.example.com/b.csv")
	if err != nil {
		return err
	}

	err = Download("https://c.example.com/c.csv")
	if err != nil {
		return err
	}

	return nil
}

func main() {
	DownloadFiles()
}
