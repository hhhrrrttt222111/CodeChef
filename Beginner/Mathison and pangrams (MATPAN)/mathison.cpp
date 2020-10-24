#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int i, j, P[26], S=0;

	    for(i=0;i<26;i++) {
	        cin>>P[i];
	    }
	    char s[50000], a[26];
	    cin>>s;

	    for(i=0;i<26;i++) {
	        a[i]=(char) i+97;
	    }

	    for(i=0;i<26;i++) {
	        int c=0;
	        for(j=0;s[j]!='\0';j++) {
	            if(a[i]==s[j]) {
	                c++;
	                break;
	            }
	        }
	        if(c<1) {
	            S+=P[i];
	        }
	    }
	    cout<<S<<endl;
	    
	}
}
