#include<stdio.h>
#include<stdlib.h>
 
void factorial(int*,int);
void print(int*);
void add(int*,int*);
 
int main()
{
        int arr[200]={0},i,t,n,j;
        scanf("%d",&t);
        for(i=0;i<t;i++)
        {
               for(j=0;j<200;j++)
                       arr[j]=0;
               scanf("%d",&n);
               factorial(arr,n);
               print(arr);
               printf("\n");
        }
        return 0;
}
 
void factorial(int *arr,int n)
{
        int tmparr[200]={0};
        int i,j;
        arr[199]=1;
        for(i=1;i<=n;i++)
        {
               for(j=0;j<200;j++)
                       tmparr[j]=0;
               for(j=0;j<i;j++)
               {
                       add(arr,tmparr);
               }
               for(j=0;j<200;j++)
                       arr[j]=tmparr[j];
        }
}
 
void add(int*arr,int*tmparr)
{
        int i;
        for(i=199;i>0;i--)
        {
               tmparr[i]+=arr[i];
               if(tmparr[i]>9)
               {
                       tmparr[i-1]+=1;
                       tmparr[i]%=10;
               }
        }
}
 
void print(int*arr)
{
        int i,flag=0;
        for(i=0;i<200;i++)
        {
               if(arr[i]!=0 || flag)
               {
                       flag=1;
                       printf("%d",arr[i]);
               }
        }
}