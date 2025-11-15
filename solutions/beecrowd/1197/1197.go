package main

import "fmt"

func main() {
	var v, t int32
	for {
		_, err := fmt.Scanf("%d %d", &v, &t)
		if err != nil {
			break
		}

		fmt.Println(v * t * 2)
	}
}
