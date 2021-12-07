package main

import "fmt"

func main() {
	var a, b, c float64

	fmt.Scanf("%f", &a)
	fmt.Scanf("%f", &b)
	fmt.Scanf("%f", &c)

	fmt.Printf("MEDIA = %.1f\n", (a*2.0+b*3.0+c*5.0)/10.0)
}
