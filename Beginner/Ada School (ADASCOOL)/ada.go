package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	loop := scanner.Text()
	totalLine, _ := strconv.Atoi(loop)

	for totalLine > 0 {
		scanner.Scan()
		text := scanner.Text()
		if len(text) != 0 {
			numbers := strings.Split(text, " ")
			number1, _ := strconv.Atoi(numbers[0])
			number2, _ := strconv.Atoi(numbers[1])
			if (number1*number2)%2 == 0 {
				fmt.Println("YES")
			} else {
				fmt.Println("NO")
			}
		}
		totalLine--
	}
}
