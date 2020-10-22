#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int d = __gcd(n,m);
	    int ans = (n/d)*(m/d);
	    cout<<ans<<endl;
	}
	return 0;
}