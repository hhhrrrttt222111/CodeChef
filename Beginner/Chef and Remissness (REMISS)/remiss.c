#include<stdio.h>

int main() { 

    int T, A, B;

    scanf("%d", &T);

    for(int i=1;i<=T;i++) {
        scanf("%d %d", &A, &B);
        if(A>B) {
            printf("%d %d\n", A, A+B);
        } 
        else if(A<B) {
            printf("%d %d\n", B, A+B);
        }
        else if(A=B) {
            printf("%d %d\n", B, A+B);
        }
    }

    return 0;
}