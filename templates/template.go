package main

import "fmt"

func main() {
	var n int16
	for {
		_, err := fmt.Scanf("%d", &n)
		if err != nil {
			break
		}

		fmt.Println(n)
	}
}
