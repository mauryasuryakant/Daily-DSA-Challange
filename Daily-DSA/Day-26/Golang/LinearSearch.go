// Find the Unique Element

package main

import "fmt"

func main() {
	numbers := [9]int{2, 3, 6, 5, 3, 7, 6, 7, 2}
	var xor_tool int = 0

	for _, value := range numbers {
		xor_tool ^= value
	}

	fmt.Printf("The Unique element is :- %d \n", xor_tool)
}
