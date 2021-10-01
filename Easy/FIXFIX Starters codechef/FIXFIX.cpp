//FIXFIX- FIXED NUMBER OF FIXED POINTS
//https://www.codechef.com/START14B/problems/FIXFIX/
//Author: iwasamistake- Anushka Garg
#include<bits/stdc++.h>
using namespace std;
typedef int ll;
#define fast ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define endl "\n"
#define ii pair<ll,ll>
#define ic pair<char,ll>
#define pb push_back
#define vi vector<ll>
#define popb pop_back
#define all(v) (v).begin(), (v).end()
#define F first
#define S second
const int N=1e5+1;

int main()
{
    fast;
    ll tt=1,i,j,num;
    cin>>tt;
    for(num=1;num<=tt;num++)
    {
       ll n,k;
       cin>>n>>k;
       if(n==1&&k==0){cout<<-1<<"\n";continue;}
       if(abs(n-k)==1){cout<<-1<<"\n";continue;}
       for(i=1;i<=k;i++){
        cout<<i<<" ";
       }
       if((n-k)%2==0){
        for(i=n;i>k;i--)
        {
            cout<<i<<" ";
        }
        cout<<"\n";continue;
       }
       else{
            cout<<k+2<<" "<<k+3<<" "<<k+1<<" ";
            for(i=n;i>k+3;i--){
                cout<<i<<" ";
            }
            cout<<"\n";continue;
       }

    }

}
