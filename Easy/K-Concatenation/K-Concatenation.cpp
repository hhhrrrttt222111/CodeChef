#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll kadane(int arr[], int n){
    ll curr_sum=0,best_sum=INT_MIN;
        for(int i=0;i<n;i++){
            curr_sum+=arr[i];
        
        if(best_sum<curr_sum){
            best_sum=curr_sum;
        }
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    return best_sum;
}
ll maxsubarraysum(int arr[], int n, int k){
    ll kadane_sum=kadane(arr,n);
    if(k==1){
        return kadane_sum;
    }
    ll curr_prefix_sum=0,curr_suffix_sum=0,max_prefix_sum=INT_MIN,max_suffix_sum=INT_MIN;
    for(int i=0;i<n;i++){
        curr_prefix_sum+=arr[i];
        max_prefix_sum=max(max_prefix_sum,curr_prefix_sum);
    }
    for(int i=n-1;i>=0;i--){
        curr_suffix_sum+=arr[i];
        max_suffix_sum=max(max_suffix_sum,curr_suffix_sum);
    }
    ll ans;
    if(curr_prefix_sum<0){
        ans=max(max_prefix_sum+max_suffix_sum,kadane_sum);
    }
    else{
       ans=max(max_prefix_sum+max_suffix_sum+(curr_prefix_sum*(k-2)),kadane_sum); 
    }
    return ans;
    
}

int main() {
	int T,N,K;
	cin>>T;
	 while(T--){
	     cin>>N>>K;
	     int arr[N];
	     for(int i=0;i<N;i++){
	         cin>>arr[i];
	     }
	     cout<<maxsubarraysum(arr,N,K)<<endl;
	 }
	return 0;
}
