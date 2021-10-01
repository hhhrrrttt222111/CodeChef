#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=0; i<n; i++)
#define foe(i, n) for(int i=1; i<=n; i++)
#define foo(i, j, n) for(int i=j; i<n; i++)
#define ll long long
#define si(x)	scanf("%d", &x)
#define sl(x)	scanf("%lld", &x)
#define ss(s)	scanf("%s", &s)
#define pi(x)	printf("%d\n", x)
#define pl(x)	printf("%lld\n", x)
#define ps(s)	printf("%s\n", s)
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x, y) cout<<#x<<"="<<x<<", "<<#y<<"="<<y<<endl
#define pb push_back
#define PI 3.1415926535897932384626
typedef vector<int> vi;

const int mod = 1000000007;
const int N = 3e5, M = N;

int a[N];

int mpow(int base, int exp) {
	base %= mod;
	int result = 1;
	while (exp > 0) {
		if (exp & 1) result = ((ll)result * base) % mod;
		base = ((ll)base * base) % mod;
		exp >>= 1;
	}
	return result;
}

/*===============================================================================*/

void solve() {
	char board[3][3];
	int ctr_x = 0, ctr_o = 0, ctr_ = 0;
	bool flag_x = 0, flag_o = 0;
	fo(i, 3) {
		fo(j, 3) {
			cin >> board[i][j];
			if (board[i][j] == 'X') ctr_x++;
			if (board[i][j] == 'O') ctr_o++;
			if (board[i][j] == '_') ctr_++;
		}
	}


	fo(i, 3) {
		fo(j, 3) {
			if (board[i][j] == 'X') {
				if (j == 2) flag_x = 1;
			} else break;
		}
	}
	fo(i, 3) {
		fo(j, 3) {
			if (board[j][i] == 'X') {
				if (j == 2) flag_x = 1;
			} else break;
		}
	}
	fo(i, 3) {
		if (board[i][i] == 'X') {
			if (i == 2) flag_x = 1;
		} else break;
	}
	fo(i, 3) {
		if (board[i][2 - i] == 'X') {
			if (i == 2) flag_x = 1;
		} else break;
	}
	fo(i, 3) {
		fo(j, 3) {
			if (board[i][j] == 'O') {
				if (j == 2) flag_o = 1;
			} else break;
		}
	}
	fo(i, 3) {
		fo(j, 3) {
			if (board[j][i] == 'O') {
				if (j == 2) flag_o = 1;
			} else break;
		}
	}
	fo(i, 3) {
		if (board[i][i] == 'O') {
			if (i == 2) flag_o = 1;
		} else break;
	}
	fo(i, 3) {
		if (board[i][2 - i] == 'O') {
			if (i == 2) flag_o = 1;
		} else break;
	}

	if (ctr_x < ctr_o || ctr_x > ctr_o + 1) cout << "3" << endl;
	else if (flag_o && flag_x) cout << "3" << endl;
	else if (flag_x && ctr_x == ctr_o) cout << "3" << endl;
	else if (flag_o && ctr_x > ctr_o) cout << "3" << endl;
	else if (flag_x || flag_o) cout << "1" << endl;
	else if (!ctr_) cout << "1" << endl;
	else cout << "2" << endl;










}
/*===============================================================================*/



int main()
{
	//fast i/o
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
#endif


	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}


	return 0;
}



