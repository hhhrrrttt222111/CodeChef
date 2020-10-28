#include <stdio.h>

int main(void) {
	// your code goes here
	int n,T,i,j,k;
	scanf("%d",&T);
	while(T--)
	{
	 scanf("%d",&n);
	 int arr[n+1][n+1];
	 k=1;
	 for(i=2;i<=2*n;i++)
	 {
	  for(j=i-1;j>=1;j--)
	      if(i-j<=n && j<=n)
	        arr[i-j][j]=k++;
	 }
	 for(i=1;i<=n;i++)
	 {
	  for(j=1;j<=n;j++)
	      printf("%d ",arr[i][j]);
	  printf("\n");
	 }
	}
	return 0;
}

