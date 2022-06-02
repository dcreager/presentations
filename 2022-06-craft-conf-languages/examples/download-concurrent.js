function downloadFiles() {
    return Promise.all([
        download("https://a.example.com/a.csv"),
        download("https://b.example.com/b.csv"),
        download("https://c.example.com/c.csv"),
    ]);
}

async function download(url) {}

downloadFiles().then(x => {});
