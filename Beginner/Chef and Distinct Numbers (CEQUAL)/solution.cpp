#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
#include<vector>
#include<algorithm>
#define PI 3.142857
#define ll long long
#define MOD 1000000007
#define For for(int i=0;i<n;i++)
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,f=1;
        cin>>n;
        ll a[n];
        For{
            cin>>a[i];
        }
        sort(a,a+n);
        For{
            if(a[i]==a[i+1]){
                f=0;
                cout<<"Yes";
                break;
            }
        }
        if(f==1){cout<<"No";}
        cout<<"\n";
    }
    return 0;
}
