
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 1e18 ; // infinite
const int32_t M=1e9 + 7 ; // for moduluous purposes

 
void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int r=0,g=0,b=0;
	
	for(int i=0;i<s.size();i++){
		r = r + (s[i]=='R');
		g = g + (s[i]=='G');
		b = b + (s[i]=='B');
	}
	
	cout<<(n-max(r,max(g,b)))<<endl;
}
 

int32_t main(){
	#ifndef ONLINE_JUDGE
    #endif
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(NULL); // increases speed of cin and cout
     
    
     int t; 
     t=1;
     cin>>t; 
     while(t--) solve();
	 return 0;
}

