#include<stdio.h>
int main()
{
	int n, i, s=0, count=0, max=0, x=0, y=0, flag=0;
	char a[1000003], b[1000003], c1;
	scanf("%d",&n);
	scanf("%s %s",a,b);
	for(i=0;i<n;i++){
     if(a[0]==b[i]){
        y++;   
   		s=i;
      	count++;
       	i++; 
  while(a[y]==b[i]){
       count++;
       y++;
       i++;
       if(i==n){ 
       	flag=1;
         break;
      }
   }
   int k=0;
       if(flag){ 
       	while(y<n&&a[y]==b[k]){
       		count++;
       		y++;
            k++;
       }
    }
    if(max==count&&s<x){
 		x=s;       
 	} else if(max<count){
        max=count;
         x=s;
    }
       y=0;
      count=0;i--;
      flag=0;   
    }
}
	printf("%d",x);
 return 0;
} 
