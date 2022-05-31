use std::sync::Arc;

struct Person {
    name: Box<String>,
    age: u8,
}

impl Person {
    fn new(name: &str, age: u8) -> Person {
        let name = name.to_string();
        let name = Box::new(name);
        Person { name, age }
    }
}

fn process_family() {
    let me = Arc::new(Person::new("Doug", 42));
    println!("{} is {} years old", me.name, me.age);
}

fn main() {
    process_family();
}
