/*
SUBMITTED BY: Deadeye001
PROBLEM CODE: LASTDIG
DATE: 02/10/2021
*/
#include <bits/stdc++.h>
using namespace std;

long long po(long long a,long long b)
{
	a%=10;
	long long res=1;
	while(b>0)
	{
		if(b&1)
		res=res*a%10;
		a=a*a%10;
		b>>=1;
	}
	return res;
}
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long a,b;
		cin>>a>>b;
		long long ans=po(a,b);
		cout<<ans<<"\n";
	}
	// your code goes here
	return 0;
}
