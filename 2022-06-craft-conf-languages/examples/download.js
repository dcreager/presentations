const https = require('https');
https.get('https://dcreager.net/', resp => {
    let length = 0;
    resp.on('data', chunk => length += chunk.length);
    resp.on('end', () => console.log(length));
});
