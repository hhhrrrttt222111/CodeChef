#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;

	    if(max(a,b)%2==0 && max(a,b)-min(a,b)==1) {
	        cout<<"YES\n";
	    }
        else if(a%2==b%2 && abs(a-b)==2) {
	        cout<<"YES\n";
	    }
        else {
	        cout<<"NO\n";
	    }
	}
	return 0;
}
