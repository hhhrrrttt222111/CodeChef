#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N=200005;


void solve(){

    int p, a, b, c, x, y;
    cin >> p >> a >> b >> c >> x >> y;
    int u = b + x * a, v = c + y * a;
    int ans = p / min(u, v);

    cout << ans << endl;

}



#undef int 
int main() {
#define int long long int
ios_base::sync_with_stdio(false); 
cin.tie(0); 
cout.tie(0);

    

    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        //cout << "Case #" << tc << ": ";
        solve();
    }
    
    
return 0;  
 
}


