package main

import (
	"fmt"
	"io"
)

func main() {
	var l, c int16

	for {
		_, err := fmt.Scanf("%d", &l)
		if err != nil {
			if err == io.EOF {
				break
			}
		}
		fmt.Scanf("%d", &c)

		fmt.Printf("%d\n%d\n", (l*c)+((l-1)*(c-1)), (((l - 1) * 2) + ((c - 1) * 2)))
	}
}
