#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) 			for(int i=0; i<n; i++)
#define foe(i, n) 			for(int i=1; i<=n; i++)
#define foo(i, j, n) 		for(int i=j; i<n; i++)
#define deb(x) 				cout<<#x<<"="<<x<<endl
#define deb2(x, y) 			cout<<#x<<"="<<x<<", "<<#y<<"="<<y<<endl
#define mem0(a) 			memset(a, 0, sizeof(a))
#define mem1(a) 			memset(a, -1, sizeof(a))
#define eo exit(0)
#define pb push_back
#define PI 3.1415926535897932384626
#define ll long long

typedef vector<int> vi;


const int mod = 1000000007;
const int N = 1e5 + 1, M = N;

ll mpow(ll base, ll exp);
int mgcd(int a, int b);

int  a[1001][1001];


ll fval(ll x, ll y) {
	ll val;
	val = x * (x + 1) / 2 + (y - 1) * (x - 1) + y * (y - 1) / 2;
	return val;
}

void pre_solve() {
	for (int i = 0; i < 1001; i++) {
		a[0][i] = 0;
		a[i][0] = 0;
	}
	for (int i = 1; i < 1001; i++) {
		for (int j = 1; j < 1001; j++) {
			a[i][j] = fval(i, j);
		}
	}
}


/*---------------------------------------(MAIN)---------------------------------------------*/
void tusharr() {

	ll x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	ll sum = 0;
	if (x1 == x2 && y1 == y2) {
		cout << fval(x1, y1) * 2 << endl;
		return;
	}
	for (int i = x1; i <= x2; i++) {
		sum += a[i][y1];
	}
	for (int j = y1 + 1; j <= y2; j++) {
		sum += a[x2][j];
	}
	cout << sum << endl;
}
/*---------------------------------------(MAIN)---------------------------------------------*/

int main() {
	//fast i/o
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


// #ifndef ONLINE_JUDGE
// 	freopen("i.txt", "r", stdin);
// 	freopen("o.txt", "w", stdout);
// #endif

	int t = 1;
	cin >> t;
	pre_solve();
	while (t--) {
		tusharr();
	}
	return 0;
}

/*---------------------------------------(FUNCTIONS)---------------------------------------------*/

ll mpow(ll base, ll exp) {
	base %= mod;
	ll result = 1;
	while (exp > 0) {
		if (exp & 1) result = ((ll)result * base) % mod;
		base = ((ll)base * base) % mod;
		exp >>= 1;
	}
	return result;
}

int mgcd(int a, int b) {
	if (b == 0)
		return a;
	return mgcd(b, a % b);
}