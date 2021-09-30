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
        ll p,h;
        cin>>h>>p;
        while(1){
            if(h>0){
                if(p<=0){
                    cout<<0<<"\n";
                    break;
                }
                else{
                    h-=p;
                    p/=2;
                }
            }
            else {
                cout<<1<<"\n";
                break;
            }
        }
    }
    return 0;
}
