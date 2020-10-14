#include <stdio.h>
#include<math.h>

int main(void) {
    int t, x, y;
    int count=0, sum;
    scanf("%d\n", &t);
    for(int i=0; i<t; i++){
        
        scanf("%d %d\n", &x,&y);
        count = 0;
        sum = x+y+1;
        while(count==0){
            count = 1;
            for(int i=2; i<=sqrt(sum); i++){
                count=1;
                if(sum%i==0){
                    count = 0;
                    break;
                }
            }
            if(count==0){
                sum++;
            }
        }
        printf("%d\n", sum-x-y);
    
    }

	return 0;
}
