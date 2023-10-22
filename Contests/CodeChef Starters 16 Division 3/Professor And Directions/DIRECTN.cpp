#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;string temp;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>temp;
	    bool flag = false;
	    for(int i=0;i<n-1;i++){
	            if(temp[i]==temp[i+1]){
	                flag = true;
	                break;
	            }
	    }
	    if(flag) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
