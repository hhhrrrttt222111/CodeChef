#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N=200005;


void solve(){

    int a, b;
    cin >> a >> b;
    while(__gcd(a, b) > 1){
        a /= __gcd(a, b);
    }
    int p = (a == 1);

    if(p) cout << "YES\n";
    else cout << "NO\n";
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


