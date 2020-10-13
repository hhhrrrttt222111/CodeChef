#include <stdio.h>

int main(void) {

	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    float s;
	    scanf("%d", &n);
	    if(n<1500) {
	      s = n+(0.1*n) + (0.9*n);  
	    }
	    else {
	        s = n+500 + (.98*n);
	    }
	    printf("%.2f\n", s);
	}
	return 0;
}