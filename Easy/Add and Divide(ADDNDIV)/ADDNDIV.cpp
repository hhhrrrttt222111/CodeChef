//Codechef Starters 13
//Problem: Add And Divide - ADDNDIV
//Problem Difficulty - Easy
//Author: Anushka Garg
//Codechef Username: iwasamistake
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
ll M= 1e9+7;
int main()
{
    fast;
    ll tt=1,i,j,num;
    cin>>tt;
    for(num=1;num<=tt;num++)
    {
       ll a,b;
       cin>>a>>b;
       if(a==1){cout<<"YES"<<"\n";continue;}
       if(b==1&&a!=1){cout<<"NO"<<"\n";continue;}
       ll n1= __gcd(a,b);
       ll a1= a/n1;
       while(1){
              n1=__gcd(a1,b);
              a1=a1/n1;
              if(n1==1){break;}
       }

       if(n1==1&&a1==1){cout<<"YES"<<"\n";}
       else{cout<<"NO"<<"\n";continue;}
    }

}
