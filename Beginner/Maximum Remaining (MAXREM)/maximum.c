#include<stdio.h>
int main(void)
{
int n,a,max1=0,max2=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a);
if(a>max1)
{
max2=max1;
max1=a;
}
else if(a>max2 && a<max1)
max2=a;
}
printf("%d\n",max2);
return 0;
}