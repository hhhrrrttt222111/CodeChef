#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	int a,b,n;
	int max, min, ratio;
	scanf("%d",&t);
	while(t>0)
	{
	    scanf("%d%d%d",&a,&b,&n);
	    while(n>0)
	    {
	        if(n%2 != 0)
	        {
	            a*=2;
	        }
	        else
	        {
	            b*=2;
	        }
	        n-=1;
	    }
	    max = (a>b?a:b);
	    min = (a<b?a:b);
	    ratio = max/min;
	    printf(ratio);
	    t-=1;
	}
	return 0;
}

