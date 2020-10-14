#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    int n=s.length();
	    int zero = 0;
	    int one = 0;
	    for(int i=0;i<n;i++) {
	        if(s[i]=='0')
	            zero++;
	        if(s[i]=='1')
	            one++;
	    }
	    if(zero==1||one==1) {
	        cout<<"Yes"<<endl;
	    }
	    else {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}