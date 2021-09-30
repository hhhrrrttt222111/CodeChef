#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ll t, n, p;
	int flag, i;
	cin >> t;
	while (t--) {
		flag = 0;
		cin >> n >> p;
		vector<ll> d(n, 0);
		vector<ll> q(n, 0);
		for (int i = 0; i < n; i++)
			cin >> d[i];
		if (d[n - 1] > p) {
			flag = 1;
			q[n - 1] = 1;
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				if (p % d[i] != 0) {
					flag = 1;
					q[i] = p / d[i] + 1;
					break;
				}
			}
			if (i == n) {
				for ( i = n - 1; i >= 0; i--) {
					if (p % d[i] == 0) {
						q[i] = p / d[i] - 1;
						p = d[i];
					}
					else {
						flag = 1;
						q[i] = p / d[i] + 1;
						break;
					}
				}
			}
		}

		if (flag == 0)
			cout << "NO" << endl;
		else
		{
			cout << "YES ";
			for (int i = 0; i < n; i++)
				cout << q[i] << " ";
			cout << endl;
		}
	}
	return 0;
}