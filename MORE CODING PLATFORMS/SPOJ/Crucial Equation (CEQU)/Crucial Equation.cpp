/*
SUBMITTED BY: Deadeye001
PROBLEM CODE: CEQU
DATE: 02/10/2021
*/

#include <bits/stdc++.h>
using namespace std;
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

void findsol(int a,int b,int c)
{
	int g=gcd(a,b);
	if(c%g)
	cout<<"No";
	else
	cout<<"Yes";
}

int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		cout<<"Case "<<i<<": ";
		findsol(a,b,c);
		cout<<"\n";
	}
	return 0;
}
