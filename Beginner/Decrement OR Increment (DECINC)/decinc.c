#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num%4==0)
    num++;
    else
    num--;
    printf("%d\n",num);
}
