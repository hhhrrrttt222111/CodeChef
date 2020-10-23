package main

import (
    "bufio"
    "fmt"
    "os"
    "strings"
    "strconv"
)

func can_withdraw(amount int, balance float64 ) float64 {
  remaining_balance := balance - float64(amount) - 0.5
  if (amount % 5 == 0 && remaining_balance >= 0 && amount > 0 && amount <= 2000 && balance >= 0 && balance <= 2000 ) {
    return remaining_balance
  } else {
    return balance
  }
}

func main() {
  reader := bufio.NewReader(os.Stdin)
  input, _ := reader.ReadString('\n')

  input = strings.TrimSuffix(input, "\n")
  string_args := strings.Split(input, " ")

  arg1, _ := strconv.ParseInt(string_args[0], 10, 64)
  arg2, _ := strconv.ParseFloat(string_args[1], 64)

  fmt.Printf("%.2f\n", can_withdraw(int(arg1), arg2))
}
