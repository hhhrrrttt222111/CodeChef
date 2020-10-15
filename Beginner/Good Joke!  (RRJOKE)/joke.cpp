#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) { 
		int n, a, b;
    	cin >> n;
    	for (int i = 0; i < n; ++i) 
    		cin >> a >> b;
    	int ans = n;
    	while (--n) 
    		ans ^= n;
    	cout << ans << endl;
	}
	return 0;
}