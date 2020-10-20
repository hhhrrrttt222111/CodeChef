
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 1e18 ; // infinite
const int32_t M=1e9 + 7 ; // for moduluous purposes


 
void solve()
{
	int n;
	cin>>n;
	int arr[n][n];
	int x=1,y=2;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			if((i+j)%2==0){
				arr[i][j]=x;
				x=x+2;
			}
			else{
				arr[i][j]=y;
				y=y+2;
			}
		}
		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
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

