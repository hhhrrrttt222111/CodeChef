#include <stdio.h>

int main() {
    int T, n, c, count=0;

    scanf("%d",&T);
	for(int i=1; i<=T; i++)
	{
	    
	    scanf("%d",&n);
	    while(n>0)
	    {
	    if(n>=100)
	    {
	        c=n/100;
	        n=n%100;
	       
	    }
	    else if(n>=50)
	    {
	        c=n/50;
	        n=n%50;
	    }
	    else if(n>=10)
	    {
	        c=n/10;
	        n=n%10;
	    }
	    else if(n>=5)
	    {
	        c=n/5;
	        n=n%5;
	    }
	    else if(n>=2)
	    {
	        c=n/2;
	        n=n%2;
	    }
	    else if(n>=1)
	    {
	        c=n/1;
	        n=n%1;
	    }
	    count = count + c;
	}
	printf("%d\n", count);
	}
	return 0;
}