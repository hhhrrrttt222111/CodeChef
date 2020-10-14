/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:29/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
       long long k,n,ans=0;
       char str[4];
       scanf("%lld%lld",&k,&n);
       int a,b,c;
       a=k%10;
       k=k/10;
       b=k%10;
       k=k/10;
       c=k;
       if((a!=b && a!=c && b!=c))
       {
           ans=27;
       }
       else if(a==b && b==c)
       {
           ans=1;
       }
       else if(a==b || a==c || b==c)
       {
           ans=8;
       }
       else
       {
           
       }
       printf("%lld\n",ans);
    }
    return 0;
}