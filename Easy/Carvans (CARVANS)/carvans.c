#include <stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
         int num=1;
        for(i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
            {
                 a[i]=a[i-1];
                 continue;
            }
            num++;
        }
        printf("%d\n",num);
    }
    return 0;
}
