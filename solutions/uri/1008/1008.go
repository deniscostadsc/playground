package main

import "fmt"

func main() {
	var a int16
	var b, c float64

	fmt.Scanf("%d", &a)
	fmt.Scanf("%f", &b)
	fmt.Scanf("%f", &c)

	fmt.Printf("NUMBER = %d\n", a)
	fmt.Printf("SALARY = U$ %.2f\n", b*c)
}
