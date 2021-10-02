#include <bits/stdc++.h>

#define int 			long long int
#define endl 			'\n'
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<int> o;
	vector<int> e;
	for(auto i : a){
		if(i&1) o.push_back(i);
		else e.push_back(i);
	}
	vector<int> ans;
	while(!e.empty()){
		if((int)o.size() <= 1){
			ans.push_back(e[0]);
			e.erase(e.begin());
			continue;
		}
		ans.push_back(e[0]);
		ans.push_back(o[0]);
		e.erase(e.begin());
		o.erase(o.begin());
	}
	if(!o.empty()){
		for(auto i : o) ans.push_back(i);
	}
	for(auto i : ans) cout << i << " ";
	cout << endl;
}


int32_t main(){
    FIO;
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}
