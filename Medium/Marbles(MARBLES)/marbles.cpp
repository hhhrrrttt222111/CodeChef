#include <iostream>
using namespace std;
long long int nCr(int n, int r)
{
	long long int ans = 1;

	if(r > n-r){
		r = n-r;
	}
	if(r == 1){
		return n;
	}
	if(r == 0){
		return 1;
	}
	for(int i=1; i<=r; i++){
		ans *= (n-i+1);
		ans /= i;
	}
	return ans;
}
int main() {
	int T;
	cin >> T;
	while(T--){
		int n,k;
		cin >> n >> k;

		int remainingN = n-k;

		if(remainingN==0){
			cout << 1 << endl;
		}
		else{
			cout << nCr(remainingN+k-1, remainingN) << endl;
		}
	}
	return 0;
}
