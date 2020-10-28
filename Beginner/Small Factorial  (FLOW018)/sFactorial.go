package main

import "fmt"

/* Variable Declaration */
var factVal uint64 = 1
var i int = 1
var n int
var numb int

func factorial(n int) uint64 {
	if n < 0 {
		fmt.Print("Factorial of negative number doesn't exist.")
	} else {
		for i := 1; i <= n; i++ {
			factVal *= uint64(i)
		}

	}
	return factVal
}

func main() {
	fmt.Print("Enter a positive integer between 0 - 1000 : ")
	fmt.Scan(&n)
	numb := make([]int, n, n)
	for a := 0; a < n; a++ {
		fmt.Scan(&numb[a])
	}
	for a := 0; a < n; a++ {
		factVal = 1
		fmt.Println("Factorial is: ", factorial(numb[a]))
	}
}
