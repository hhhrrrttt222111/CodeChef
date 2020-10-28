#include <stdio.h>

int main(void) {
    int t,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	   int f=1;
	    scanf("%d",&n);
	   for(int j=n;j>=1;j--)
	   {
	    f=f*j; 
	   }
     printf("%d\n",f);
	}
	return 0;
}

