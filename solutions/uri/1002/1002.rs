use std::io;

fn main() {
    let mut input_n = String::new();

    if let Err(_e) = io::stdin().read_line(&mut input_n){}

    let n: f64 = input_n.trim().parse().unwrap();

    println!("A={:.4}", n * n * 3.14159);
}
