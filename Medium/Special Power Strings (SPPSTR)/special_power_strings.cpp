#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 607;
string A, B;
set<char> has[8];
int dp[MAX][MAX];
 
int spToNum(char a) {
	if(a == '#')	return 1;
	if(a == '?')	return 2;
	else 	return 4;
}
 
int solve(int l, int r, const int sp) {
	int n = A.length(), m = B.length();
	if(l == n && r == m)	return 1;
	if(l != n && r == m)	return 0;
	if(dp[l][r] != -1)	return dp[l][r];
	if(l == n && r != m) {
		if(B[r] == '#' || B[r] == '?' || B[r] == '!')
			return dp[l][r] = solve(l, r + 1, sp);
		return dp[l][r] = 0;
	}
	int ret;
	if(B[r] == '#' || B[r] == '?' || B[r] == '!') {
		int x = spToNum(B[r]);
		if((sp & x) && has[x].find(A[l]) != has[x].end()) {
			ret = solve(l + 1, r + 1, sp) | solve(l + 1, r, sp) | solve(l, r + 1, sp);
		} else {
			ret = solve(l, r + 1, sp);
		}
	}
	else {
		if(A[l] == B[r])	ret = solve(l + 1, r + 1, sp);
		else 	ret = 0;
	}
	return dp[l][r] = ret;
}
 
int main(){
 
	int t;
	cin >> t;
	while(t--) {
		int ans = 10;
		cin >> A >> B;
		has[1].clear();
		has[2].clear();
		has[4].clear();
		for(int i = 1; i <= 4; i <<= 1) {
			string asch;
			cin >> asch;
			for(int j = 0; j < asch.length(); j++) {
				has[i].insert(asch[j]);
			}
		}
		for(int i = 0; i < 8; i++) {
			for(int j = 0; j < MAX; j++) {
				for(int k = 0; k < MAX; k++) {
					dp[j][k] = -1;
				}
			}
			if(solve(0, 0, i) == 1)
				ans = min(ans, __builtin_popcount(i));
		}
		cout << (ans == 10 ? -1: ans) << endl;
	}
 
	return 0;
}