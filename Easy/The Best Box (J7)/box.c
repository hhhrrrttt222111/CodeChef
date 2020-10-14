#include<stdio.h>
#include<math.h>
 
int main()
{
    int i,t;
        double P,S;
        double b,v;
        scanf("%d",&t);
        for(i=0;i<t;i++)
        {
                scanf("%lf %lf",&P,&S);
                b=(P-sqrt((P*P-24*S)))/12;
                v=b*(S/2-P*b/4+b*b);
                printf("%.2lf\n",v);
        }
        return 0;
} 