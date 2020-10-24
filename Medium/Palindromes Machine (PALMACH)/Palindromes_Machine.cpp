#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define uint unsigned
#define pii pair<int,int>
#define pll pair<ll,ll>
#define PB push_back
#define fi first
#define se second
#define For(i,j,k) for (int i=(int)(j);i<=(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define CLR(a,v) memset(a,v,sizeof(a));
#define CPY(a,b) memcpy(a,b,sizeof(a));
using namespace std;
const int mo=1000000007;
const int N=1005;
int n,m,S[N][2];
struct node{
	ull x,y;
	int tp;
	bool operator <(const node &a)const{
		return x==a.x?y<a.y:x<a.x;
	}
}a[N];
char s[N];
int f[N][N][2];
int type[N];
int fac[N],inv[N];
int power(int x,int y){
	int s=1;
	for (;y;y/=2,x=1ll*x*x%mo)
		if (y&1) s=1ll*s*x%mo;
	return s;
}
void init(){
	fac[0]=inv[0]=inv[1]=1;
	For(i,2,N-1) inv[i]=1ll*inv[mo%i]*(mo-mo/i)%mo;
	For(i,1,N-1) fac[i]=1ll*fac[i-1]*i%mo;
	For(i,1,N-1) inv[i]=1ll*inv[i-1]*inv[i]%mo;
}
int A(int x,int y){
	if (x<0||y<0||y>x) return 0;
	return 1ll*fac[x]*inv[x-y]%mo;
}
int C(int x,int y){
	if (x<0||y<0||y>x) return 0;
	return 1ll*fac[x]*inv[y]%mo*inv[x-y]%mo;
}
void solve(){
	scanf("%d%d",&n,&m);
	For(i,1,n){
		scanf("%s",s+1);
		ull h1=0,h2=0;
		For(j,1,n) h1=h1*233+s[j];
		Rep(j,n,1) h2=h2*233+s[j];
		if (h1<h2) a[i]=(node){h1,h2,0};
		else a[i]=(node){h2,h1,1};
	}
	sort(a+1,a+n+1);
	int id=0;
	For(i,1,n){
		if (a[i].x!=a[i-1].x||a[i].y!=a[i-1].y||i==1){
			++id; S[id][0]=S[id][1]=type[id]=0;
			if (a[i].x==a[i].y) type[id]=1;
		}
		++S[id][a[i].tp];
	}
	For(i,0,n) For(j,0,n)
		f[i][j][0]=f[i][j][1]=0;
	f[0][0][0]=1;
	int pre=0;
	For(i,1,id)
		if (type[i]==0){
			int v=min(S[i][0],S[i][1]);
			For(j,0,v){
				int val=1ll*A(S[i][0],j)*A(S[i][1],j)%mo;
				val=1ll*val*power(2,j)%mo;
				For(k,0,pre) For(tp,0,1)
					f[i][j+k][tp]=(f[i][j+k][tp]+1ll*val*f[i-1][k][tp]%mo*C(j+k,j))%mo;
			}
			pre+=v;
		}
		else{
			int v=S[i][1]/2;
			For(j,0,v){
				int val0=A(S[i][1],j*2);
				int val1=A(S[i][1],j*2+1);
				For(k,0,pre){
					f[i][j+k][0]=(f[i][j+k][0]+1ll*val0*f[i-1][k][0]%mo*C(j+k,j))%mo;
					f[i][j+k][1]=(f[i][j+k][1]+1ll*val1*f[i-1][k][0]%mo*C(j+k,j))%mo;
					f[i][j+k][1]=(f[i][j+k][1]+1ll*val0*f[i-1][k][1]%mo*C(j+k,j))%mo;
				}
			}
			pre+=v;
		}
int ans=0;
	For(i,0,pre){
		if (2*i&&2*i<=m) ans=(ans+f[id][i][0])%mo;
		if (2*i+1&&2*i+1<=m) ans=(ans+f[id][i][1])%mo;
	}
	printf("%d\n",ans);
}
int main(){
	init();
	int T;
	scanf("%d",&T);
	while (T--) solve();
}