#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int g1, s1, b1, g2, s2, b2;
	    int total1, total2;
	    cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
	    total1 = g1 + s1 + b1;
	    total2 = g2 + s2 + b2;
	    if(total1 > total2)
	        cout << 1 <<endl;
	    else
	        cout << 2 << endl;
	}
	return 0;
}
