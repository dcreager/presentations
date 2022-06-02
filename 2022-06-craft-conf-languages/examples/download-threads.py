import threading

def download(url):
    print(url)

def download_files():
    a = download_one("https://a.example.com/a.csv")
    b = download_one("https://b.example.com/b.csv")
    c = download_one("https://c.example.com/c.csv")
    a.join()
    b.join()
    c.join()

def download_one(url):
    thread = threading.Thread(target=download, args=(url,))
    thread.start()
    return thread

download_files()
