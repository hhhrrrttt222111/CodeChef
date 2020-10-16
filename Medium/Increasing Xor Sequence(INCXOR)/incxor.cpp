#include <bits/stdc++.h>
using namespace std;

#define new _enw
#define pii pair<int,int>
#define maxn 6
#define mp make_pair
#define F first
#define S second
const int mod= 1e9 + 7;
int a[maxn];
long long int dp[40][(1<<maxn)][(1<<maxn)];


pii getnew (int ind, int new, int mask1, int mask2, int n){
	int A[6], B[6];
	for (int i=0; i<6; i++) A[i]= B[i]= 0;
	for (int i=0; i<n; i++){
		if (mask1&(1<<i)) A[i+1]= 1;
		if (mask2&(1<<i)) B[i+1]= 1;
	}

	int preg[6], prexg[6];
	preg[0]= prexg[0]= 0;
	for (int i=1; i<=n; i++){
		preg[i]= preg[i-1] + A[i];
		prexg[i]= prexg[i-1] + B[i];
	}

	int add[6], xadd[6];
	for (int i=0; i<n; i++){
		int t= new & (1<<i);
		add[i+1]= (new>>i)&1;
		t= a[i+1] ^ (1<<ind);
		xadd[i+1]= add[i+1] ^ ((a[i+1]>>ind) & 1);
	}
	for (int i=1; i<=n; i++){
		for (int j=1; j<i; j++){
			if (preg[i]==preg[j] and add[i]==0 and add[j]==1) return mp(-1, -1);
			if (prexg[i]==prexg[j] and xadd[i]==0 and xadd[j]==1) return mp(-1, -1);
		}
	}
	int newmask1= 0, newmask2= 0;
	for (int i=2; i<=n; i++){
		int t= (1<<(i-1));
		if (A[i]){
			newmask1+=t;
		}
		else{
			if (add[i]==1 and add[i-1]==0){
				newmask1+=t;
			}
		}
		if (B[i]){
			newmask2+=t;
		}
		else{
			if (xadd[i]==1 and xadd[i-1]==0){
				newmask2+=t;
			}
		}
	}
	return mp(newmask1, newmask2);
}

long long int f (int ind, int mask1, int mask2, int n){
	if (ind==-1) return 1;
	if (dp[ind][mask1][mask2]>=0) return dp[ind][mask1][mask2];
	long long int ans= 0LL;
	int cnt= 0;
	for (int msk= 0; msk<(1<<n); msk++){
		pii t= getnew(ind, msk, mask1, mask2, n);
		if (t.F==-1) continue;
		cnt++;
		ans= (ans+f(ind-1, t.F, t.S, n))%mod;
	}
	return dp[ind][mask1][mask2]= ans;

}


void solve(){
	int n;
	cin>>n;
	for (int i=1; i<=n; i++) cin>>a[i];
	memset(dp, -1, sizeof(dp));
	cout<<f(30, 0, 0, n)<<endl;
}

int main(){
	int t;
	cin>>t;
	while (t--) solve();
}
