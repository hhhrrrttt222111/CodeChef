#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
uli lcm(uli a, uli b){
	return (a*b)/(__gcd(a, b));
}
int main()
{
	jaadu;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		std::vector<uli> arr(n);
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
		}
		uli result = 1e18;
		for(int i=0;i<n;i++){
			for(int j= i+1;j<n;j++){
				result = min(result, lcm(arr[i], arr[j]));
			}
		}
		cout<<result<<endl;
	}
	return 0;
}