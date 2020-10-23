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
	testcase, _ := strconv.Atoi(loop)

	for testcase > 0 {
		scanner.Scan()
		text := scanner.Text()
		firstnameMap := make(map[string]int)
		atttendances := []string{}
		totalAttendance, _ := strconv.Atoi(text)
		for totalAttendance > 0 {
			scanner.Scan()
			text := scanner.Text()
			names := strings.Split(text, " ")
			firstname := names[0]
			firstnameMap[firstname]++
			atttendances = append(atttendances, text)
			totalAttendance--
		}

		for _, fullname := range atttendances {
			names := strings.Split(fullname, " ")
			firstname := names[0]
			surname := names[1]
			if firstnameMap[firstname] > 1 {
				fmt.Println(firstname, surname)
			} else {
				fmt.Println(firstname)
			}
		}
		testcase--
	}
}
