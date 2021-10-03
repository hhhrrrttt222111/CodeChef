#include <stdio.h>

int main(){
    float bal;
    int ta;
    printf("Enter the amount to be withdrawed and current account balance\n");
    scanf("%d %f",&ta,&bal);
    if(ta<=bal && ta%5==0){
        bal = bal -(ta+.50);
    }
    printf("%.2f\n", bal);
}
