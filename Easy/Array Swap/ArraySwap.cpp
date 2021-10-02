#include<bits/stdc++.h>
#define ll long long int
#define llu unsigned long long int
#define FOR(i, t) for(int i = 0;i < (t);i++)
#define PI 3.14159265359
#define MOD 1000000007
using namespace std;
//
//
int main()
{	
	int n, m;
	cin >> n >> m;
	vector<int> a;
	vector<int> b;
	vector<int> :: iterator itr;
	for(int i = 0;i < n;i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	for(int i = 0;i < m;i++)
	{
		int x;
		cin >> x;
		b.push_back(x);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	ll ans = 0;
	for(int i = 0;i < m;i++)
	{
		if(b[i] < a[0])
		{
			ans+=n;
		}
	}
	cout << ans << endl;
	return 0;
}