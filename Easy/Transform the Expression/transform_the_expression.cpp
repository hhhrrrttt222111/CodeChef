#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	string s;
	while(t--){
	    int top=-1;
	    cin>>s;
	    int len=s.length();
	    char o[len];
	    for(int i=0;i<len;i++){
	        if(s[i]>='a'&&s[i]<='z')
	        cout<<s[i];
	        else if(s[i]==')'){
	            cout<<o[top];
	            top--;
	        }
	        else if(s[i]!='('){
	            top++;
	            o[top]=s[i];
	        }
	    }
	    cout<<endl;
	    
	}
	return 0;
}
