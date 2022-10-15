#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    map<int,int>s;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s[a[i]]++;
	    }
	    int x=0;
	    for(int i=0;i<n;i++){
	        if(x<s[a[i]]){
	            x=s[a[i]];
	        }
	    }
	    cout<<n-x<<endl;
	}
	return 0;
}
