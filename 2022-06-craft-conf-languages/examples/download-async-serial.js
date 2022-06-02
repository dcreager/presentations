async function downloadFiles() {
    await download("https://a.example.com/a.csv");
    await download("https://b.example.com/b.csv");
    await download("https://c.example.com/c.csv");
}

async function download(url) { console.log(url); }

downloadFiles().then(x => {});
