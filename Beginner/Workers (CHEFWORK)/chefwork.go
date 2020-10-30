package main
import (
    "fmt"
)

func main(){
  var total_workers int
  fmt.Scan(&total_workers)

  var coins []int
  var next_int int
  for i := 0; i < total_workers; i++ {
    fmt.Scan(&next_int)
    coins = append(coins, next_int)
  }

  translator_cost := 100001
  author_cost := 100001
  author_translator_cost := 100001
  for i := 0; i < total_workers; i++ {
    fmt.Scan(&next_int)
    worker := next_int
    worker_cost := coins[i]
    if worker == 1 {
      if translator_cost > worker_cost {
        translator_cost = worker_cost
      }
    } else if worker == 2 {
      if author_cost > worker_cost {
        author_cost = worker_cost
      }
    } else {
      if author_translator_cost > worker_cost {
        author_translator_cost = worker_cost
      }
    }
  }

  combined_cost := translator_cost + author_cost
  if (author_translator_cost > combined_cost) {
    fmt.Println(combined_cost)
  } else {
    fmt.Println(author_translator_cost)
  }
}
