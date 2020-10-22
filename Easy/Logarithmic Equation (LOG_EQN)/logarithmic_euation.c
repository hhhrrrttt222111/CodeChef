#include <stdio.h>
#include <math.h>
 //main function starts
int main()
{
    long long a[100000],k,t,n,z,i,x,b[100000];
	long long count,r,p,m;
	scanf("%lld",&t);
	
	while(t>0)
	{
		scanf("%lld",&n);
		p=0;
		m=0;
		x=0;
		for(z=0;z<n;z++)
		{
     	scanf("%lld",&a[z]);
   
     	count=0;
     	while(1)
     	{
     		if(a[z]&1==1)
     		count++;
     		a[z]=a[z]>>1;
     		if(a[z]<=0)
     		break;
     	}
     	
    
     	if(count%2!=0)
     	{m++;b[z]=1;}
     	else
     	b[z]=0;
     	
     
     		if(b[z]==0&&z>1)
     		{
     			x+=m*(z-m);
     		}
     		
     		else if(z>1&&b[z]==1)
     		{
   
     			if(m-1>=2)
     			x+=(m-1)*(m-2)/2;
     			
     			if(z+1-m>=2)
     			x+=(z-m)*(z-m+1)/2;
     		}
     		
     		x%=1000000007;
    }	 
  	printf("%lld\n",x);
	t--;
	}
	return 0;
}

