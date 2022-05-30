fn fib(x: u64) -> u64 {
    let mut a = 0;
    let mut b = 1;
    for _ in 0..x {
        let next = a + b;
        a = b;
        b = next;
    }
    a
}

fn main() {
    println!("{}", fib(10));
}
