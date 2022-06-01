import asyncio

async def download(url):
    pass

async def download_files():
    await asyncio.gather(
        download("https://a.example.com/a.csv"),
        download("https://b.example.com/b.csv"),
        download("https://c.example.com/c.csv"),
    )

asyncio.run(download_files())
