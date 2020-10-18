#include <iostream>
#include <string>
using namespace std;


int main() {

    int t;
    string s;
    cin >> t;

    while (t--) {
        cin>>s;

        int i, f=0, l=s.length();
	    if(s[0]==s[1]){
	        f = 1;
	        }
	    for(i=0;i<l-2;i++) {
	        if(s[i]!=s[i+2]){
	            f = 1;
	            break;
	        }
	    }
	    if(f)
	     cout<<"NO\n";
	    else
	     cout<<"YES\n";
    }
    

    return 0;
}