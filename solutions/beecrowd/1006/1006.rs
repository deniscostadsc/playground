use std::io;

fn main() {
    let mut input_a = String::new();
    let mut input_b = String::new();
    let mut input_c = String::new();

    if let Err(_e) = io::stdin().read_line(&mut input_a){}
    let a: f64 = input_a.trim().parse().unwrap();
    if let Err(_e) = io::stdin().read_line(&mut input_b){}
    let b: f64 = input_b.trim().parse().unwrap();
    if let Err(_e) = io::stdin().read_line(&mut input_c){}
    let c: f64 = input_c.trim().parse().unwrap();

    println!("MEDIA = {:.1}", (a * 2.0 + b * 3.0 + c * 5.0) / 10.0);
}
