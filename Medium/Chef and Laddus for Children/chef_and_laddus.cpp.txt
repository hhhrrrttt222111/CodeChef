#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int64_t s[n];
	    for(int i=0;i<n;i++)
	    cin>>s[i];
	    int64_t x=0;
	    sort(s,s+n);
	    for(int i=0;i<k-1;i++)
	    x+=s[i+1]-s[i];
	    
	    vector<int64_t> v;
	    v.push_back(x);
	    for(int i=0;i<n-1-k;i++){
	        x=x-s[i+1]+s[i];
	        x=x+s[i+k]-s[i+k-1];
	        v.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    
	    cout<<v[0]<<"\n";
	}
	return 0;
}
