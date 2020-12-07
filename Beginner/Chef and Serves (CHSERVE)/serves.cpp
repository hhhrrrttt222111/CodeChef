#include <iostream>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--) {
	    long long p1,p2,k;
	    cin>>p1>>p2>>k;
	    long long total=p1+p2;
	    long long x=total/k;
	    if(x%2==0)
	    cout<<"CHEF"<<endl;
	    else
	    cout<<"COOK"<<endl;
	}
	return 0;
}
