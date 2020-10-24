package main

import (
	"fmt"
)

func main() {
	var t int
  	fmt.Scan(&t)
	for i := 0; i < t; i++{
		var n int
		var p int
		var a int
		var hard int = 0
		var cakew int = 0
		fmt.Scan(&n)
		fmt.Scan(&p)

		for j := 0; j < n; j++ {
			fmt.Scan(&a)
			if a <= (p/10) {
				hard++
			} else if a >= (p/2) {
				cakew++		
			} 	
		}

		if hard==2 && cakew==1 {
    		fmt.Println("yes")
        } else {		
			fmt.Println("no")
        }
	}
}