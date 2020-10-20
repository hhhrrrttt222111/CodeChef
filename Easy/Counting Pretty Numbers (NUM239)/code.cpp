
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 1e18 ; // infinite
const int32_t M=1e9 + 7 ; // for moduluous purposes

 
void solve()
{
	int l,r,count=0;
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		if(i%10==2||i%10==3||i%10==9)
			count++;
	}
	cout<<count<<endl;
	
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

