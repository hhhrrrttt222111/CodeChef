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
		int n;
		cin>>n;
		std::vector<long long int> arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		std::vector<int> result(n);
		result[n-1] = 1;
		int cursignp = 0, prevSignp = 0;
		if(arr[n-1]>0){
			cursignp = 1;
			prevSignp = 1;
		}
		for(int i=n-2;i>=0;i--){
			if(arr[i]>0){
				cursignp = 1;				
			}else{
				cursignp = 0;
			}
			if(cursignp != prevSignp){
				result[i] = result[i+1] + 1;
			}else{
				result[i] = 1;
			}
			if(arr[i]>0){
				prevSignp = 1;				
			}else{
				prevSignp = 0;
			}
		}
		for(int i=0;i<n;i++){
			cout<<result[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}