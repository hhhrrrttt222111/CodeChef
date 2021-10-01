// Solution using bit manipulation
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[n],b[n],d[n]={0};
        // d[i]=1 means we have performed the swapping operation for the i th index.
	    f(i,0,n){
	        cin>>a[i];
	    }
	    f(i,0,n){
	        cin>>b[i];
	    }
        // mx stores the answer for maximum bitwise AND
        // mn stores the answer for minimum number of swap operations required.
	    ll mx=0,mn=0;
        /* For maximum AND we want the bits from leftmost end to be '1' */
	    for(ll i=29;i>=0;i--){
	        ll c=0,x=1<<i;
            /* c stores the count for which we are getting bit at that position equal to 1 either by swapping or not swapping. */
	        f(j,0,n){
	            if(x&(a[j]))c++;
	            else if(d[j]==0&&(x&b[j]))c++;
	        }
	        if(c==n){
	            mx|=x;
	            f(j,0,n){
	                if(x&(a[j])){
	                    if(d[j]==0&&(x&b[j]))continue;
	                    if(d[j]==0)d[j]=1; // We cannot perform swapping operation in next turns for this index.
	                }
	                else if(d[j]==0&&(x&b[j])){
	                    swap(a[j],b[j]);
	                    d[j]=1; // We cannot perform swapping operation in next turns for this index.
	                    mn++;
	                }
	            }
	        }
	    }
	    cout<<mx<<" "<<mn<<endl;
	}
}