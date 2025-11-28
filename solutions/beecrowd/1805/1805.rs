use std::io;

fn main() {
    let mut input = String::new();

    while io::stdin().read_line(&mut input).is_ok() {
        if input.is_empty() {
            break;
        }

        let numbers = input
            .split_whitespace()
            .map(|s| s.parse::<u64>())
            .collect::<Result<Vec<_>, _>>();

        if let Ok(nums) = numbers {
            if nums.len() == 2 {
                let first = nums[0];
                let last = nums[1];
                println!("{}", (last - first + 1) * (first + last) / 2);
            }
        }

        input.clear();
    }
}
