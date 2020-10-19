#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	   long long int n;cin>>n;
	   long long int a[n];
	   for(int i=0;i<n;i++)
	   {
	       cin>>a[i];
	   }
	   long long int s=a[0]-a[1];
	   for(int i=1;i<n-1;i++)
	   {
	       s=min(a[i]-a[i+1],s);
	   }
	   cout<<s<<endl;
	}
	return 0;
}
