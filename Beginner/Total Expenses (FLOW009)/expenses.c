#include<stdio.h>

int main(){
    int t,quant,price;
    printf("Enter the total number of test cases: ");
    scanf("%d",&t);
    while(t>0){
        printf("Enter the quantity and price:");
        scanf("%d%d",&quant,&price);
        printf("%f\n",(float)(price*quant));
        t--;
    }
}
