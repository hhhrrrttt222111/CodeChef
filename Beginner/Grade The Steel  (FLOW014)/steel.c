#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--)
    {
        float i, j, k;
        scanf("%f %f %f", &i, &j, &k);
        if((i>50) && (j<0.7) && (k>5600)){
            printf("10\n");
        }
        else if((i>50) && (j<0.7)){
            printf("9\n");
        }
        else if((j<0.7) && (k>5600)){
            printf("8\n");
        }
        else if((i>50) && (k>5600)){
            printf("7\n");
        }
        else if((i>50) || (j<0.7) || (k>5600)){
            printf("6\n");
        }
        else if((i<=50) && (j>=0.7) && (k<=5600)){
            printf("5\n");
        }
    }
    return 0;
}
