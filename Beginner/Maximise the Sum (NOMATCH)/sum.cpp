#include <bits/stdc++.h>
using namespace std;

int main() {

	int t=0;
	cin>>t;
	
	while(t--) {
        int n=0;
        cin>>n;
        
        long long int arr[n];
        
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        
        long long int sum=0;
        
        for(int i=0;i<n/2;i++) {
            sum += abs(arr[n-i-1]-arr[i]);
        }
        cout<<sum<<endl;
	}
	return 0;
}