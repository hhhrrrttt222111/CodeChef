
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 1e18 ; // infinite
const int32_t M=1e9 + 7 ; // for moduluous purposes

 
void solve()
{
	int n,w,h,p,b;
	cin>>n>>b;
	int max_area=0,area;
	for(int i=0;i<n;i++){
		cin>>w>>h>>p;
		area = w*h;
		if(p<=b&&area>max_area){
			max_area = area;
		}
	}
	if(max_area==0)
		cout<<"no tablet"<<endl;
	else
		cout<<max_area<<endl;
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

