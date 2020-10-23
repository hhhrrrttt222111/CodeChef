#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--) {
	    int n, flag=0;
        string s;
	    cin>>n;
	    cin>>s;
	    int a[26]={0};

	    for(int i=0;i<n;i++) {
	        a[s[i]-97]++;
	    }
	    for(int i=0;i<26;i++) {
	        if(a[i]%2!=0){
	            flag=1;
	            break;
            }
	    }
	   
	   if(flag==1)
	       cout<<"NO"<<endl;
	   else 
	       cout<<"YES"<<endl;
	    
	}
	return 0;
}
