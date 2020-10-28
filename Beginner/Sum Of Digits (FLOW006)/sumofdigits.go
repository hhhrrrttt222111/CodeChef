package main

import (
	"fmt"
	"strconv"
)

/* Variable Declaration */

var i int = 1
var n int
var numb int

func sumOfDigits(n int) uint64 {
	var sumVal uint64 = 0
	if n < 0 {
		fmt.Print("Bad input.")
	} else if n > 0 {
		strDigits := strconv.Itoa(n)
		for i := 0; i < len(strDigits); i++ {
			el, _ := strconv.Atoi(string(strDigits[i]))
			sumVal += uint64(el)
		}

	}
	return sumVal
}

func main() {
	fmt.Print("Enter a count of strings : ")
	fmt.Scan(&n)
	numb := make([]int, n, n)
	for a := 0; a < n; a++ {
		fmt.Scan(&numb[a])
	}
	for a := 0; a < n; a++ {
		fmt.Println("Sum is: ", sumOfDigits(numb[a]))
	}
}
