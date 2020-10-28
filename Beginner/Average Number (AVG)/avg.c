#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,k,avg,sum,i,diff,ans;
	scanf("%d",&t);
	while(t-->0)
	{
	    sum=0;
	    scanf("%d %d %d",&n,&k,&avg);
	    int a[n];
	    for(i=0;i<n;i++)
	     {   scanf("%d",&a[i]);
	        sum+=a[i];
	     }
	    diff=((n+k)*avg-sum)/k;
	    if(diff<=0||((n+k)*avg-sum)%k)
	        printf("-1\n");
	    else
	        printf("%d\n",diff);
	}
	
	return 0;
}

