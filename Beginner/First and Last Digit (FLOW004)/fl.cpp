#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, f, l;
	cin >> t;
	while(t--){
	    cin >> n;
	    l = n%10;
	    while(n>0){
	        f = n%10;
	        n /= 10;
	    }
	    cout << f+l << endl;
	}
	return 0;
}
