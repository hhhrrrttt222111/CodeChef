#include<stdio.h>

int main() { 

    int T, A, B, C;
    scanf("%d", &T);

    for(int i=1;i<=T;i++) {
        scanf("%d %d %d", &A, &B, &C);
        
        if(A+B+C==180) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
    }
