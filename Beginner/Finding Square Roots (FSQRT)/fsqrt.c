#include<stdio.h>
#include <math.h>
int main(){
    int x,y;
    scanf("%d",&x);
    for (int i = 0;i<x;i++){
        scanf("%d",&y);
        printf("%d\n",(int)pow(y,0.5));
    }
}