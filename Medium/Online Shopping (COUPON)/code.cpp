#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		long long c[n][m],d[n][m],dp[n][m];
		for(long long i=0;i<n;i++)
		for(long long j=0;j<m;j++)
		cin>>c[i][j];
		for(long long i=0;i<n;i++)
		for(long long j=0;j<m;j++)
		cin>>d[i][j];
		long long minidx=0;
		for(long long j=0;j<m;j++)
		{
			dp[0][j]=c[0][j];
			if(c[0][j]<c[0][minidx]) minidx=j;
		}
		for(long long i=1;i<n;i++){
			long long tempmin=0;
			for(long long j=0;j<m;j++)
			{
				long long cost=c[i][j]-d[i-1][j];
				if(cost<0) cost=0;
				dp[i][j]=dp[i-1][j]+cost;
				if(minidx!=j)
				{
					long long temp=dp[i-1][minidx]+c[i][j];
					if(temp<dp[i][j]) dp[i][j]=temp;
				}
				if(dp[i][j]<dp[i][tempmin]) tempmin=j;
			}
			minidx=tempmin;
		}
		cout<<dp[n-1][minidx]<<endl;
	}
	return 0;
}