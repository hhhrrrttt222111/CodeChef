#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
int main()
{
	jaadu;
	int t;
	cin>>t;
	while(t--){
		int n,k, minSteps = 0, low = 0, high = 0;
		cin>>n>>k;
		std::vector<int> heights(n);
		for(int i=0;i<n;i++){
			cin>>heights[i];
		}
		if(heights[0] > k){
			if(heights[0] % k == 0){
				minSteps += heights[0]/k -1;
			}
			else minSteps += heights[0]/k;
		}
		for(int i=1;i<n;i++){
			int diff = heights[i] - heights[i-1];
			if(diff > k){
				if(diff%k == 0){
					minSteps += diff/k - 1;
				}else minSteps += diff/k;
			}
		}
		cout<<minSteps<<endl;
	}
	return 0;
}