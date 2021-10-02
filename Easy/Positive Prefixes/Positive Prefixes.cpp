// link- https://www.codechef.com/DEC20B/problems/POSPREFS/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    if(n==k){
	        f(i,0,n)cout<<(i+1)<<" ";
	        cout<<endl;
	    }
	    else if(n&1){
	        if(k>(n+1)/2){
	            ll a[n+1];
	            f(i,1,n+1){
	                if(i%2==0){
	                    a[i]=(-1)*i;
	                  
	                }
	                else a[i]=i;
	            }
	            ll v=k-(n+1)/2;
	            for(ll i=n;i>0;i--){
	               if(v>0&&i%2==0){
	                    a[i]*=-1;
	                    v--;
	               }
	               else if(v==0) break;
	            }
	            f(i,1,n+1)cout<<a[i]<<" ";
	            cout<<endl;
	        }
	        else{
	            
	            ll u=k;
	            f(i,1,n+1){
	                 if(i%2==0||u<=0){
	                    cout<<(-1)*i<<" ";
	                    u--;
	                }
	                else cout<<i<<" ";
	            }
	            cout<<endl;
	        }
	    }else if(n%2==0){
	        if(k>n/2){
	            ll a[n+1];
	            f(i,1,n+1){
	                if(i%2==0){
	                    a[i]=(-1)*i;
	                }
	                else a[i]=i;
	            }
	            ll v=k-n/2;
	            for(ll i=n;i>0;i--){
	               if(v>0&&i%2==0){
	                    a[i]*=-1;
	                    v--;
	               }
	               else if(v==0) break;
	            }
	            f(i,1,n+1)cout<<a[i]<<" ";
	            cout<<endl;
	            
	        }
	        else{
	            ll u=k;
	            f(i,1,n+1){
	                if(i%2==0||u<=0){
	                    cout<<(-1)*i<<" ";
	                    u--;
	                }
	                else cout<<i<<" ";
	            }
	            cout<<endl;
	        }
	    }
	}
	return 0;
}