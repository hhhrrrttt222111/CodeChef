#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t;
	cin >> t;
	while (t) {
		ll N;
		double dis = 0.0f;
		
		cin >> N;
		for(int i = 0; i < N; i++) {
			double P, Q, D;
            cin >> P >> Q >> D;

            double p = P;
            p = p + (p * (D / 100.0));
            p = p - (p * (D / 100.0));

            float loss = (P - p) * Q;
            dis += loss;
		}
		
        cout << dis << endl;

		t--;
	}

	return 0;
}