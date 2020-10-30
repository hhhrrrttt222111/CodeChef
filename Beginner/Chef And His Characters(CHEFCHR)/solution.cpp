#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    ll count = 0;
	    ll n = s.length();
	    for(ll i=0;i<n-3;i++){
	        ll char_count[26]={0};
	        if(s[i]=='c' || s[i]=='h' || s[i]=='e' || s[i]=='f'){
	            char_count[s[i]-'a']++;
	            char_count[s[i+1]-'a']++;
	            char_count[s[i+2]-'a']++;
	            char_count[s[i+3]-'a']++;
	        }
	        
	        if(char_count[2]==1 && char_count[7]==1 && char_count[4]==1 && char_count[5]==1)
	            count++;
	    }
	    if(count==0)
	        cout<<"normal"<<endl;
	    else
	        cout<<"lovely "<<count<<endl;
	}
	return 0;
}