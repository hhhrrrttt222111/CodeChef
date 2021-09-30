/* Given a positive integer n, the task is to count the total number of set bits in the binary representation of all the numbers from 1 to n.
Return the count modulo 109 + 7.*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int A) {
    if(A==0)
        return 0;
    ll x = log2(A);
    ll ans=0;
    ll b = x * pow(2, x-1);
    int rem = A - pow(2,x);
    ans = (ans + b + (rem+1) + solve(rem))%mod;
    return ans%mod;
}

int main() {
	int A;
	cin>>A;
	
	cout<<solve(n);
	
	return 0;
}