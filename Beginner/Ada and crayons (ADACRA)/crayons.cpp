#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {

	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int c=0;
	    for(int i=0;i<s.length()-1;i++){
	        if(s[i]!=s[i+1])
	            c++;
	    }
	    if(c%2==0)
	        cout<<c/2<<endl;
	    else
	        cout<<(c+1)/2<<endl;
	}
	return 0;
}
