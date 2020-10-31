#include <iostream>
using namespace std;
typedef long long int ll;


int main() {
	int t;
	cin>>t;
	ll n,k,d,e;
	while(t--){
	    
	    cin>>n>>k;
	    if(k!=0){
	    d=ll(n/k);
	    e=n%k;
	    cout<<d<<" "<<e<<endl;
	    }
	    else
	    cout<<0<<" "<<n<<endl;
	}
    return 0;
}
