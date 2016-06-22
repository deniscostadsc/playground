package main

import "fmt"

func sum_all_divisible_by_n(n int, target int) int {
	p := target / n
	return n * (p * (p + 1)) / 2
}

func main() {
	div_by_3 := sum_all_divisible_by_n(3, 999)
	div_by_5 := sum_all_divisible_by_n(5, 999)
	div_by_15 := sum_all_divisible_by_n(15, 999)

	fmt.Println(div_by_3 + div_by_5 - div_by_15)
}
