package main

import "fmt"

func main() {
	var a string
	var b, c float64

	fmt.Scanf("%s", &a)
	fmt.Scanf("%f", &b)
	fmt.Scanf("%f", &c)

	fmt.Printf("TOTAL = R$ %.2f\n", b+(c*0.15)*100/100)
}
