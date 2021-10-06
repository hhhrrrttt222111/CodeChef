package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main()  {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	loop := scanner.Text()
	totalLine, _ := strconv.Atoi(loop)

	for totalLine > 0 {
		scanner.Scan()
		nkv :=  scanner.Text()
		nkvs := strings.Split(nkv, " ")
		n, _ := strconv.Atoi(nkvs[0])
		k, _ := strconv.Atoi(nkvs[1])
		v, _ := strconv.Atoi(nkvs[2])
		length := n + k

		scanner.Scan()
		sequence := scanner.Text()
		sequences := strings.Split(sequence, " ")
		deleted := length - len(sequences)
		if deleted < 0 {
			fmt.Println(-1)
			totalLine--
			continue
		}
		sum := 0
		for _, number := range sequences {
			temp, _ := strconv.Atoi(number)
			sum += temp
		}

		x := (v * length) - sum
		answer := x % deleted
		if answer == 0 && x > 0 {
			fmt.Println(x/deleted)
		} else {
			fmt.Println(-1)
		}

		totalLine--
	}
}