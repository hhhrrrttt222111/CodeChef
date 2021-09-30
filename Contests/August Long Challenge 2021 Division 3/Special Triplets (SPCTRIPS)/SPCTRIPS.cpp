#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    int count = 0;
	    cin >> n;
	    for(int i = 1; i <= n; i++) {
	        for(int j = i; j <= n; j += i) {
	            if(j % i == 0) {
	                for(int k = i; k <= n; k += j) {
	                    if(k % j == i) {
	                        count++;
	                    }
	                }
	            }
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}

