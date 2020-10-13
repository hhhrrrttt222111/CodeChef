#include <stdio.h>

int main(void) {

	int t;
	scanf("%d",&t);
	while(t--)
	{
	   int n;
	   int temp=0,val=0;
	   scanf("%d",&n);
	   int a[n];
	   for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	   }

	   for(int i=0;i<n;i++) {
	         for(int j=i+1;j<n;j++) {
	               if(a[j]>a[i]) {
                        temp=a[j];
                        a[j]=a[i];
                        a[i]=temp;
	               }
	         }
	   }
	   val = a[n-1]+a[n-2];
	   printf("%d\n",val);
	           
	}
	return 0;
}
