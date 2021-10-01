#include <bits/stdc++.h>
using namespace std;
//#define int long long int

const int N=100005;

vector<int>v[N];


void solve(){

    int n;
    scanf("%d", &n);
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    long long ans = 0;
    map<pair<int, int>, int> m;

    for(int i = 1; i <= n; i++){
        int up = a[i], dn = i;
        int comm = __gcd(up, dn);
        up /= comm, dn /= comm;
        
        for(auto j : v[up]){
            if(m.find({dn, j}) != m.end()) {
                ans += m[make_pair(dn, j)];
            }
        }

        for(auto j : v[up]){
            m[make_pair(j, dn)]++;
        }
    }

    printf("%lld\n", ans);

}



//#undef int 
int main() {
//#define int long long int
ios_base::sync_with_stdio(false); 
cin.tie(0); 
cout.tie(0);


    for(int i = 1; i < N; i++){
        for(int j = i; j < N; j += i){
            v[j].push_back(i);
        }
    }

    

    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
        //cout << "Case #" << tc << ": ";
        solve();
    }
    
    
return 0;  
 
}


