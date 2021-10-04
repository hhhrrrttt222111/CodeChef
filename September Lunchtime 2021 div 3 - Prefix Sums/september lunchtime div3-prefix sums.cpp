#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n/2], b[n/2], s1=0, s2=0, i;
		for(i=0; i<n/4; i++)
		{
			a[i]=i+1;
			s1+=(i+1);
		}
		for(int i=n/4, c=0; i<3*(n/4); i++, c++)
		{
			b[c]=(i+1);
			s2+=(i+1);
		}
		for(int i=3*(n/4), c=n/4; i<n; i++, c++)
		{
			a[c]=i+1;
			s1+=(i+1);
		}
		if(s1!=s2)cout<<"NO"<<endl;
		else{
			//cout<<s1<<" "<<s2;
			cout<<"YES"<<endl;
			for(int x=0; x<n/2; x++)
				cout<<a[x]<<" ";
			cout<<endl;
			for(int x=0; x<n/2; x++)
				cout<<b[x]<<" ";
			cout<<endl;
		}

	}
	return 0;
}
