import trio

async def download_files():
    async with trio.open_nursery() as nursery:
        nursery.start_soon(download, "https://a.example.com/a.csv")
        nursery.start_soon(download, "https://b.example.com/b.csv")
        nursery.start_soon(download, "https://c.example.com/c.csv")
