package main

import (
	"fmt"
	"io"
)

func main() {
	var a int16
	var b, c, s float32

	s = 0.0

	for {
		_, err := fmt.Scanf("%d %f %f", &a, &b, &c)
		if err != nil {
			if err == io.EOF {
				break
			}
		}

		s += b * c
	}

	fmt.Printf("VALOR A PAGAR: R$ %.2f\n", s)
}
