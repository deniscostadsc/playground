package main

import (
	"fmt"
)

func main() {
	var n float64

	fmt.Scanf("%f", &n)

	fmt.Printf("A=%.4f\n", n*n*3.14159)
}
