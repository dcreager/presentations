struct InvalidDigit;

fn parse_digit(ch: u8)
  -> Result<u8, InvalidDigit> {
    if ch >= b'0' && ch <= b'9' {
        return Ok(ch - b'0');
    }
    Err(InvalidDigit)
}

fn parse_file(contents: &[u8])
  -> Result<(), InvalidDigit> {
    parse_digit(contents[0])?;
    Ok(())
}

fn use_file(contents: &[u8]) {
    match parse_file(contents) {
        Ok(_) => {}
        Err(_) => println!("not a digit!"),
    }
}

fn main() {
    let digit = unsafe { parse_digit(b'2').unwrap_unchecked() };
    println!("{}", digit);
}
