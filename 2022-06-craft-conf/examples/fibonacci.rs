fn fib(x: u64) -> u64 {
    match x {
        0 => 0,
        1 => 1,
        x => fib(x - 2) + fib(x - 1),
    }
}

fn main() {
    println!("{}", fib(10));
}
