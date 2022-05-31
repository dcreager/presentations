def parse_digit(ch):
    if ord(ch) >= ord('0') and ord(ch) <= ord('9'):
        return ord(ch) - ord('0')
    raise ValueError("not a digit")

print(parse_digit('2'))
