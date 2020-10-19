#include <stdio.h>
int main() {
	// your code goes here
	int T;
	int N,j,s;
	long long c;
	scanf("%d",&T);
	int i;
	for(i=0;i<T;i++)
	{
	    
	    scanf("%d",&N);
	    long long A[100001];
	    for(j=0;j<N;j++)
	    {
	        scanf("%lld",&A[j]);
	    }
	   c=A[0]-A[1];
	        
	        for(j=1;j<N-1;j++)
	        {
	            if((A[j]-A[j+1])<c)
	            c=A[j]-A[j+1];
	        }
	    
	    printf("%lld\n",c);
	}
	return 0;
}
