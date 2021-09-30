//Chef and Cook Off
#include<stdio.h>

#include<stdlib.h>


int main(){
    int n = 0;
    scanf("%d", &n);
    int score[5] = {0};
    while(n--) {
        int c=0;
        for(int i=0; i<5; i++) {
            scanf("%d", &score[i]);
        }
        for(int i=0; i<5; i++) {
            if(score[i] == 1) {
                c++;
            }
        }
        if(c == 0)
            printf("Beginner\n");
        if(c == 1)
            printf("Junior Developer\n");
        if(c == 2)
            printf("Middle Developer\n");
        if(c == 3)
            printf("Senior Developer\n");
        if(c == 4)
            printf("Hacker\n");
        if(c == 5)
            printf("Jeff Dean\n");
    }
    return 0;

}
