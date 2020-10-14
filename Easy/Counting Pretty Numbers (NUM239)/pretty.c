#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int count=0;
        int i,a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        while(a<=b)
        {
            if(a%10==2 || a%10==3 || a%10==9)
            {
                count++;
            }
            a++;
        }
        printf("%d\n",count);
    }

    return 0;
}
