#include <stdio.h>

int main(void) {
	int x;
	float y;
	
	scanf("%d",&x);
	scanf("%f",&y);
	if(x%5==0 && (y-0.5)>=x)
	{
	  y=(float)(y-x-0.50);
	  printf("%.2f\n",y);
     
	}
	else
	{   
	    printf("%.2f",y);
	}
	return 0;
}
