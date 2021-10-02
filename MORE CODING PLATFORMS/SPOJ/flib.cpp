#include <bits/stdc++.h>
using namespace std;

const int N = 3;
const int K = 52;
const long long MOD = 1e9 + 7;

struct data{ long long t[N][N]; }m[K];
int t,n;

data mul(data &a,data &b)
{
    data c;
    for(int i = 0;i < N;i++) for(int j = 0;j < N;j++){ c.t[i][j] = 0; for(int k = 0;k < N;k++) c.t[i][j] = (c.t[i][j]+(a.t[i][k]*b.t[k][j])%MOD)%MOD; }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> t;
    m[0] = {{1,1,0,0,2,3,0,3,5}};
    for(int i = 1;i < K;i++) m[i] = mul(m[i-1],m[i-1]);
    while(t--)
    {
        long long x;
        cin >> x;
        data ans = {{0,0,0,2,0,0,3,0,0}};
        for(long long i = 0;i < K;i++) if((1LL << i)&x) ans = mul(m[i],ans);
        cout << ans.t[0][0] << '\n';
    }
}
