package main

import (
	"fmt"
	"math"
)

func main() {
	var x_m, y_m, x_r, y_r float64

	for {
		_, err := fmt.Scanf("%f %f %f %f", &x_m, &y_m, &x_r, &y_r)
		if err != nil {
			break
		}

		fmt.Printf("%.0f\n", math.Abs(x_r-x_m)+math.Abs(y_r-y_m))
	}
}
