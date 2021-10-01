#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int h,m;
		cin>>m>>h;
		int ans=m/(h*h);
		if(ans<19)
		cout<<"1";
		else if(ans<25)
		cout<<"2";
		else if(ans<30)
		cout<<"3";
		else
		cout<<"4";
		cout<<"\n";
	}
	return 0;
}
