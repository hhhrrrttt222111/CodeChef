#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    long k,n; cin>>k>>n;
	    int d1=k%10,d2=k/10%10,d3=k/100%10;
	    if(d1!=d2 && d2!=d3 && d3!=d1) cout<<27;
	    else if(d1==d2 && d2==d3 && d3==d1) cout<<1;
	    else cout<<8;
	    cout<<endl;
	}
	return 0;
}
