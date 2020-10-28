#include <iostream>
using namespace std;

int main() {
	
	int t; cin >> t;
	while(t--) {
	    int a,b,n; cin >> a>>b>> n;
	    if(n%2!=0) {
            a=2*a;
        }
	    cout << max(a,b)/min(a,b) << '\n';
	}
	return 0;
}
