#include <stdio.h>

int main() {
	int l, b; 
	scanf("%d",&l); 
	scanf("%d",&b);
	int area = l*b;
	int peri = 2*(l+b);
	if(area > peri ){
        printf("Area: %d\n", area);
	  
	}
	else if(area <peri ){
        printf("Perimeter: %d\n", peri);
	}
	else {
	    printf("Eq: %d\n", area);
	}

	return 0;
}