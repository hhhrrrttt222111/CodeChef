#include<iostream>
#include<map>
using namespace std;

int main() {
	long t;
	cin>>t;
	map<long, long> sorted;     //map sorts its key:value pairs
	while(t--)
	{
	    long n;
	    cin>>n;
	    sorted[n]++;
	}
	for(auto x : sorted)
	{
	    while(x.second--)
	    {
	        cout<<x.first<<"\n";
	    }
	}
	return 0;
}
