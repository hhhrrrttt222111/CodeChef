#include <bits/stdc++.h>
using namespace std;

const int N = 5e3 + 1;

int n,k;
int a[N],dp[2][N],in[N][N];

void compute(int l,int r,int optl,int optr,int f,int id)
{
    if(l>r) return;
    int mid = (l+r)/2;
    int val = 1e9,opt = 1;
    for(int k = optl;k <= min(optr,mid-1);k++)
    {
        int now;
        if(id>1) now = dp[f^1][k]+in[mid][mid]-in[k][mid]-in[mid][k]+in[k][k];
        else now = in[k][k]+in[mid][mid]-in[k][mid]-in[mid][k]+in[k][k];
        if(now<val) val = now,opt = k;
    }
    dp[f][mid] = val;
    compute(l,mid-1,optl,opt,f,id);
    compute(mid+1,r,opt,optr,f,id);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> k; k--;
    for(int i = 1;i <= n;i++) cin >> a[i];
    for(int i = 1;i <= n;i++) for(int j = 1;j <= n;j++)
    {
        if(a[i]>a[j] and j>i) in[i][j] = 1;
        in[i][j]+=in[i-1][j]+in[i][j-1]-in[i-1][j-1];
    }
    for(int i = 1;i <= k;i++) compute(i,n,i,n,i%2,i);
    cout << dp[k%2][n];
}
