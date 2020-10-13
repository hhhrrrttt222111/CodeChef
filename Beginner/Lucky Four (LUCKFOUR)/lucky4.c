#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	int a[100];
	int b[100];
	
	for(int i = 0; i < t; i++){
        scanf("%d",&a[i]);
    }
	
	for(int i = 0; i < t; i++){
	    int num = a[i];
	    int last;
	    int  count = 0;
	    while(num != 0){
	        last = num % 10;
	        if(last == 4){
	            count++;
	        }
	        num = num / 10;
	    }
	    
	    b[i] = count;
	}
	
	for(int i = 0; i < t; i++){
	    printf("%d\n",b[i]);
	}
	return 0;
}