use std::io;

fn main() {
    let mut input_a = String::new();
    let mut input_b = String::new();
    let mut input_c = String::new();

    if let Err(_e) = io::stdin().read_line(&mut input_a){}
    let _a: String = input_a.trim().parse().unwrap();

    if let Err(_e) = io::stdin().read_line(&mut input_b){}
    let b: f64 = input_b.trim().parse().unwrap();

    if let Err(_e) = io::stdin().read_line(&mut input_c){}
    let c: f64 = input_c.trim().parse().unwrap();

    println!("TOTAL = R$ {:.2}", b + c * 0.15);
}
