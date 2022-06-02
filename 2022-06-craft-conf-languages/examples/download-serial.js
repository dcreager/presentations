function downloadFiles() {
    return download("https://a.example.com/a.csv").then(
        () => download("https://b.example.com/b.csv").then(
            () => download("https://c.example.com/c.csv")
        )
    );
}

async function download(url) { console.log(url); }

downloadFiles().then(() => {});
