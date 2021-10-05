#include<bits/stdc++.h>
using namespace std;
#define ln "\n";
#define TC() int t; cin >> t; while(t--)
#define IO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;

bool cmp(ll &a, ll &b){
	return a < b;
}

void solve(){
	ll n, m;
	cin >> n >> m;
	vector<pair<ll,ll>> v;
	for(int i = 0; i < n; i++){
		ll a,b;
		cin >> a >> b;
		v.push_back({a,b});
	}

	ll compress = 0;
	for(auto i : v) compress += i.second;

	if(compress > m){
		cout << -1 << endl;
	}
	else{
		ll originals = 0;
		for(auto i : v) originals += i.first;

		vector<ll> subt(n);
		for(int i = 0; i < n; i++)
			subt[i] = v[i].second - v[i].first;

		sort(subt.begin(),subt.end(),cmp);

		ll ct = 0;
		for(int i = 0; i < n; i++){
			while(originals > m){
				// cout << originals  << " + " << subt[i] <<" = " << originals + subt[i] << endl;
				originals = originals + subt[ct];
				ct++;
			}
		}
		cout << ct << endl;
	}
}

int main(){

	IO();
	// TC() solve();
	solve();
	

	return 0;
}
