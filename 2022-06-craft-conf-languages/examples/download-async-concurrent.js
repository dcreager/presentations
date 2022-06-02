async function downloadFiles() {
    await Promise.all([
        download("https://a.example.com/a.csv"),
        download("https://b.example.com/b.csv"),
        download("https://c.example.com/c.csv"),
    ]);
}

async function download(url) { console.log(url); }

downloadFiles().then(x => {});
