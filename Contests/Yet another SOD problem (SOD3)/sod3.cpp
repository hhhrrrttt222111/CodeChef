/* September Lunchtime 2021- Division 3-  Yet another SOD problem (SOD3)*/

#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(){
    ll l, r;
    cin>>l>>r;
    
    for (int i=0; i<3; i++){
        if(l>r){
            return 0;
        }
        else if(l<=r && l%3==0){
            break;
        }
        else{
            l++;
        }
    }
    
    for(int i=0; i<3; i++){
        if(l<=r && l%3==0){
            break;
        }
        else{
            r--;
        }
    }
    
    ll a=l/3;
    ll b=r/3;
    
    return abs(a-b)+1;
}

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    cout<<solve()<<endl;
	 }
	return 0;
}