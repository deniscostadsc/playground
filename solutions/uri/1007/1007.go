package main

import "fmt"

func main() {
	var a, b, c, d int16

	fmt.Scanf("%d", &a)
	fmt.Scanf("%d", &b)
	fmt.Scanf("%d", &c)
	fmt.Scanf("%d", &d)

	fmt.Printf("DIFERENCA = %d\n", a*b-c*d)
}
