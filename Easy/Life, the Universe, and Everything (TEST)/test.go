package main
import "fmt"

func main(){
    for {
        var a int
        fmt.Scanln(&a)
        if (a==42){
            break
        }
        fmt.Println(a)
    }
	// your code goes here
}
