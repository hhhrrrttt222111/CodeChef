#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long l,r;
	    cin>>l>>r;
	    if(r<2*l)
	        cout<<r<<"\n";
	    else
	        cout<<-1<<"\n";
	}
	return 0;
}
