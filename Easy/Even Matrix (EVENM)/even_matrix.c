#include <stdio.h>
int main(void)
{
    int tc=0,n=0;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        int b=2,a=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i+j)%2==0)
                {
                    printf("%d ",a);
                    a+=2;
                }
                else
                {
                    printf("%d ",b);
                    b+=2;
                }
            }
            printf("\n");
        }
    }
}
