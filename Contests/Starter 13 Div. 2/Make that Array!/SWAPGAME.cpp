#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N=200005;


void solve(){

    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += (i + 1) * (a[i] - b[i]);
    }
    cout << -1 * ans << endl;
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


