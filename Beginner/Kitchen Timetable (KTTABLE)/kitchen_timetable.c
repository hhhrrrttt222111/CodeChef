#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        int n,a[10000],b[10000],i=0;
        scanf("%d\n",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        scanf("%d",&b[i]);
        int count=0;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(a[i]>=b[i])
                count++;
            }
            else
            {
                if(a[i]-a[i-1]>=b[i])
                count++;
            }
        }
        printf("%d\n",count);
    }
	
	return 0;
}

