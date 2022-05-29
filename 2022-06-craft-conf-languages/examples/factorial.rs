fn factorial(x: u64) -> u64 {
    let mut result = 1;
    for factor in 1..=x {
        result *= factor;
    }
    result
}

fn main() {
    println!("{}", factorial(10));
}
