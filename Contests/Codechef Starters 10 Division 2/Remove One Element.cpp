#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)
int main(){
    fast;
    // t is the number of test cases
    ll t;
	cin>>t;
	while(t--){
	    // n repreents size of the array
	    ll n;
	    cin>>n;
	    ll a[n],b[n-1];
	    f(i,0,n)cin>>a[i];
	    sort(a,a+n);
	    // map will store elements of array b
	    unordered_map<ll,ll> mp;
	    f(i,0,n-1){
	        cin>>b[i];
	        mp[b[i]]++;
	    }
	    sort(b,b+n-1);
	    //The answer would be either x or x1. 
	    ll x=b[0]-a[0],c=0,c1=0,k=n-1;
	    /* c will store count of elements of array a meeting the required given condition
	    considering x is the result. c1 will store count of elements of array a meeting 
	    the required given condition considering x1 is the result.*/
	    if(b[k-1]-a[k]<=0)k--;
	    ll x1=b[n-2]-a[k];
	    f(i,0,n){
	        if(mp.find(a[i]+x)!=mp.end())c++;
	        if(mp.find(a[i]+x1)!=mp.end())c1++;
	    }
	    // the if condition below means both x and x1 are valid answers, so we will take minimum of both x and x1
	    if(c1==n-1&&c==n-1)cout<<min(x1,x)<<endl;
	    else if(c1==n-1)cout<<x1<<endl;// x is the valid answer
	    else cout<<x<<endl;// x1 is the valid answer
	}
}

