#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;
	while(t--) {
	    int b;
	    cin >> b;
	    int ans = 0;
	    ans = (b/2)*(b/2-1);
	    ans = ans/2;
	    cout << ans <<"\n";
	}
	return 0;
}
