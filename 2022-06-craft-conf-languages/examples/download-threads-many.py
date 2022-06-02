import threading

def download(url):
    pass

def download_files():
    files = 100000 * ["https://a.example.com/a.csv"]
    threads = [download_one(url) for url in files]
    for thread in threads:
        thread.join()

def download_one(url):
    thread = threading.Thread(target=download, args=(url,))
    thread.start()
    return thread

download_files()
