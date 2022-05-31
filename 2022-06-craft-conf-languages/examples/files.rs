use std::fs::File;
use std::io::Write;

fn save_file(filename: &str) -> Result<(), std::io::Error> {
    let mut fp = File::create(filename)?;
    write!(fp, "lots of interesting data")?;
    Ok(())
}

fn main() {
    save_file("out.dat").unwrap();
}
