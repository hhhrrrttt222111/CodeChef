#include <stdio.h>

int main(void)  {
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++) {
	    int a, b;
	    scanf("%d %d", &a, &b);
	    while(a!=0) {
	        b = (b*(b+1))/2;
	        a--;
	    }
	    printf("%d\n", b);
	}
	return 0;
}