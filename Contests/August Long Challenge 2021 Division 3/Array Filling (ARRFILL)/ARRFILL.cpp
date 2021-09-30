#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
    ll n, m;
    cin >> n >> m;
    vector<pair<int,int>>v;
    for(int i = 0; i < m; i++) {
      ll x, y;
      cin >> x >> y;
      v.push_back({x,y});
    }
    sort(v.begin(), v.end(), greater<pair<int,int>>());
    ll lcm = 1;
    ll rem = n;
    ll res = 0;
    for(int i = 0; i < m && rem > 0; i++){
        ll a = v[i].first, b = v[i].second;
        lcm = lcm*b/__gcd(lcm, b);
        res += (rem - n/lcm)*a;
        rem = n/lcm;
    }
    cout << res << endl;
    }
	return 0;
}
