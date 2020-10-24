#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007

int main(){
	fastio;

	long long t;
	cin >> t;
	for(;t>0;--t){
		long long n;
		cin >> n;
		long long arr[n], i, odd=0, even=0, ans=0;
		for(i=0;i<n;++i){
			cin >> arr[i];
			if(__builtin_popcount(arr[i]) % 2){
				ans += (even*(even-1))/2;
				ans += (odd*(odd-1))/2;
				ans %= MOD;
				++odd;
			} else {
				ans += even*odd;
				++even;
				ans %= MOD;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
