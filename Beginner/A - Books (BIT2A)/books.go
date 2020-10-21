package main

import (
	"fmt"
	"strconv"
	"strings"
)

func main() {
	var t int
  fmt.Scan(&t)
	for i := 0; i < t; i++{
		var n int
		fmt.Scan(&n)
		a := make([]int, n)
		b := make([]int, n)
		ans := make([]string, n)
		for j := 0; j < n; j++ {
			fmt.Scan(&a[j])
		}
		for j := 0; j < n; j++ {
			for k := 0; k < n; k++ {
				if a[k] > a[j] {
					b[j]++
				}
			}
		}
		for j := 0; j < n; j++ {
			ans[j] = strconv.Itoa(b[j])
		}
		fmt.Println(strings.Join(ans, " "))
	}
	return
}
