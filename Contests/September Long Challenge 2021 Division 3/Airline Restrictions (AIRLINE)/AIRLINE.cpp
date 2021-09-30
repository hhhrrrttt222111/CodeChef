#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a, b, c, d, e;
	    cin >> a >> b >> c >> d >> e;
	    if((a+b <= d && c <= e) || (b+c <= d && a <= e) || (c+a <= d && b <= e)) {
	        cout << "YES" << endl;
	    }else {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
