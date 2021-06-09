use std::io;

fn main() {
    let mut input_a = String::new();
    let mut input_b = String::new();

    if let Err(_e) = io::stdin().read_line(&mut input_a){}
    if let Err(_e) = io::stdin().read_line(&mut input_b){}

    let a: i32 = input_a.trim().parse().unwrap();
    let b: i32 = input_b.trim().parse().unwrap();

    println!("PROD = {}", a * b);
}
