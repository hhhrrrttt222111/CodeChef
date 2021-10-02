#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N=200005;


void solve(){

    string s;
    cin >> s;
    int p = 1, ans = 0;
    for(auto i : s){
        int a = i - '0';
        if(a != p) ans++;
        p = a;

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


