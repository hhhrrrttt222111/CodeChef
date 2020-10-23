// Code for Bytlandian Grid testing
#include <iostream>
#include <unordered_map>
#include <map>
#include <math.h>
using namespace std;
// Function for running the code
unordered_map<long long int,long long int>dp;
long long int runBytlandian(long long int n) {
	
	if (n < 12) {
		return n;
	}
	
	if (dp[n] != 0) {
		return dp[n];
	}
	
	dp[n] = max(n,(runBytlandian(floor(n/2))+runBytlandian(floor(n/3))+runBytlandian(floor(n/4))));
	
	
	return dp[n];
} 

// Main function
int main() {
	
	long long int n = 0 , ans = 0;
	while (cin >> n) {
		ans = runBytlandian(n);
	
		cout << ans << endl;
	}
	
	return 0;
}