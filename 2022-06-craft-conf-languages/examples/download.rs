#[derive(Debug)]
struct Error;

async fn download(url: &str) -> Result<(), Error> {
    Ok(())
}

async fn download_files() -> Result<(), Error> {
    futures::try_join!(
        download("https://a.example.com/a.csv"),
        download("https://b.example.com/b.csv"),
        download("https://c.example.com/c.csv"),
    )?;
    Ok(())
}

async fn main() {
    download_files().await.unwrap();
}
