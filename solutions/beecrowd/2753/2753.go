package main

import "fmt"

func main() {
	for i := 97; i <= 122; i++ {
		fmt.Printf("%d e %s\n", i, string(i))
	}
}
