/*------------------Shivam Sharma----------------*/
 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
#define FIO ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define int long long
#define vll vector<int>
#define vllb vector<bool>
#define uset unordered_set<int>
#define pb push_back
#define ff first
#define ss second
#define mod 1000000007
using namespace std;

typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;

int power(int x,int y)
{
    int res = 1;     
    
    x = x % mod; 
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        if (y & 1)
            res = ((res%mod)*(x%mod))%mod;
        y = y>>1;
        x = ((x%mod)*(x%mod))%mod;
    }
    return res%mod;
}
bool good(char ch){
    if(ch=='0' || ch=='1' || ch=='8' || ch=='3')
        return true;
    return false;
}
int32_t main() {
    FIO

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int f=1;
        int n=s.length();
        for(int i=1;i<s.length();i++){
            if(s[i]<s[i-1]){
                f=0;
                break;
            }
        }
        if(f==0){
            f=1;
            for(int i=0;i<n-1;i++){
                if(s[i]=='0' && s[i+1]=='0'){
                    f=0;
                    break;
                }
            }
            if(f==0){
                f=1;
                for(int i=0;i<n-1;i++){
                    if(s[i]=='1' && s[i+1]=='1'){
                        f=0;
                        break;
                    }
                }
            }
        }
        if(f==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
