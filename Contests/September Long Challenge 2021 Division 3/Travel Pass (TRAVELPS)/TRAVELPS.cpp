#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n, a, b;
	    cin >> n >> a >> b;
	    string s;
	    cin >> s;
	    
	    if(s.size() == n) {
	        int countOne = 0;
	        int countZero = 0;
	        for(int i = 0; i < n; i++) {
	            if(s[i] == '0') {
	                countZero++;
	            }else {
	                countOne++;
	            }
	        }
	        cout << (countZero*a + countOne*b) << endl;
	    }
	}
	return 0;
}
