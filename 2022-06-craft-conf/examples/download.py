import requests
response = requests.get("https://google.com/", stream=True)
size = 0
for chunk in response.iter_content(chunk_size=None):
    size += len(chunk)
print(size)
