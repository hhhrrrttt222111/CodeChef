#include <stdio.h>
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
#define MAX 100005
#define MAXN 30005
#define ll long long int

ll cuml[2*MAXN];
ll cumr[2*MAXN];

int A[MAX];

int main(void) {
	int n;
	int a=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    scanf("%d",&A[i]);
	    cumr[A[i]]++;
	    a=max(a,A[i]);
	}
	ll w=0;
	int r;
	for(int i=1;i<=n;i++)
	{
	    cumr[A[i]]--;
	    r = min(A[i]-1,a-A[i]);
	    for(int j=A[i]-r;j<=A[i]+r;j++)
	        w+=cuml[j]*cumr[2*A[i]-j];
	    cuml[A[i]]++;
	}
	printf("%lld\n",w);
	
	return 0;
}



