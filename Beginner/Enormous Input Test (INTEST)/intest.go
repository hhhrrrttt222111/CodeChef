package main

import (
    "bufio"
    "fmt"
    "os"
    "strings"
    "strconv"
)

func get_input(reader *bufio.Reader) string {
  raw_input, _ := reader.ReadString('\n')
  return strings.TrimSuffix(raw_input, "\n")
}

func get_next_int(reader *bufio.Reader) int {
  raw_input := get_input(reader)
  input, _ := strconv.Atoi(raw_input)
  return input
}

func main() {
  reader := bufio.NewReader(os.Stdin)
  string_args := strings.Split(get_input(reader), " ")
  n, _ := strconv.Atoi(string_args[0])
  k, _ := strconv.Atoi(string_args[1])

  total := 0
  for i := 0; i < n; i++ {
    next_int := get_next_int(reader)
    if next_int % k == 0 {
      total++
    }
  }
  fmt.Println(total)
}
