package main

import "fmt"

func main() {
	for i := 1; i <= 9; i += 2 {
		fmt.Printf("I=%d J=7\n", i)
		fmt.Printf("I=%d J=6\n", i)
		fmt.Printf("I=%d J=5\n", i)
	}
}
