#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N=200005;


void solve(){

    int n, p, x, y;
    cin >> n >> p >> x >> y;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(i < p){
            if(a == 1) ans += y;
            else ans += x;
        }
    }

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


