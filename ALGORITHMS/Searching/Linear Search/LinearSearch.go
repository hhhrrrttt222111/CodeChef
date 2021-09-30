package main

func Linear(array []int, query int) int {
	for i, item := range array {
		if item == query {
			return i
		}
	}
	return -1
}
