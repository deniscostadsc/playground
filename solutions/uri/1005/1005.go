package main

import "fmt"

func main() {
	var a, b float64

	fmt.Scanf("%f", &a)
	fmt.Scanf("%f", &b)

	fmt.Printf("MEDIA = %.5f\n", (a*3.5+b*7.5)/11.0)
}
