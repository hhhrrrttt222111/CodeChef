#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int i,n,q,divisor=1;
		scanf("%lld %lld",&n,&q);
		long long int a[n],b[q];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			divisor=divisor*a[i];
		}
		for(i=0;i<q;i++)
			scanf("%lld",&b[i]);
		for(i=0;i<q;i++)
		{
			if(divisor==0)
			{
				printf("0 ");
				continue;
			}
			printf("%lld ",(b[i]/divisor));
		}
		printf("\n");
	}
}