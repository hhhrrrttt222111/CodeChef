#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int N, p, k;
	    cin >> N >> p >> k;
	    int day = 0;
	    
	    int q = p % k;
	    q--;
	    int x = ((N - 1)/k)*k;
	    x = N - 1 - x;
	    if(q > x) {
	        day += (x + 1)*((N - 1)/k + 1) + (q - x)*((N - 1)/k);
	    } else {
	        day += ((N - 1)/k + 1)*(q + 1);
	    }
	    for(int i = q + 1; i < N; i += k) {
	        day++;
	        if(i == p) {
	            cout << day << endl;
	            break;
	        }
	    }
	}
	return 0;
}
