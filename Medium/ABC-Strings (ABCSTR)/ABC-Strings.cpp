#include<bits/stdc++.h>
using namespace std;
string S;
int main()
{
	cin>>S;
	int a=0,b=0,c=0;
	map<tuple<int,int,int>,int>mp;
	long ans=0;
	mp[make_tuple(0,0,0)]=1;
	for(char d:S)
	{
		if(d=='A')a++;
		else if(d=='B')b++;
		else c++;
		int mn=min({a,b,c});
		ans+=mp[make_tuple(a-mn,b-mn,c-mn)]++;
	}
	cout<<ans<<endl;
}