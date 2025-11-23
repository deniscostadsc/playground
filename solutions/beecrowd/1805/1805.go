package main

import "fmt"

func main() {
	var first, last uint64
	for {
		_, err := fmt.Scanf("%d %d", &first, &last)
		if err != nil {
			break
		}

		fmt.Println((last - first + 1) * (first + last) / 2)
	}
}
