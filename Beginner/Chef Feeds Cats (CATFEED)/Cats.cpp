#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loope(i,a,b) for(int i=a;i<=b;i++)
#define loopi(i,a,b) for(int i=a;i>=b;i--)
#define loopv(i,a,b,type) for(vector<type>::iterator i=a;i!=b;i++)
#define looplli(i,a,b) for(lli i=a;i<b;i++)
#define ll long long


void solve(){
    ll int n,m,cat,roundno=0;
        cin>>n>>m;
        vector<ll int> feed(n,0);
        bool fair = true;
        loop(i,0,m){
            cin>>cat;
            if(i%n == 0){
                roundno++;
            }
            feed[cat-1]++;
            if(feed[cat-1]>roundno){
                fair = false;
            }
        }
        if(fair){
            cout<<"YES";
        } else {
            cout<<"NO";
        }
        cout<<"\n";

}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    ll int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }
    // solve();

    return 0;
}
