#include <bits/stdc++.h>
using namespace std;

const int N = 1 << 18;
const int K = 30;

int t,n,k,cnt;
int tree[N][2],val[N];

void update(int x)
{
    int now = 0;
    for(int i = K;i >= 0;i--)
    {
        int y = x&(1 << i);
        if(y) y = 1;
        if(tree[now][y]) now = tree[now][y];
        else tree[now][y] = ++cnt,now = tree[now][y];
    }
    val[now] = x;
}

int query(int x)
{
    int now = 0;
    for(int i = K;i >= 0;i--)
    {
        int y = x&(1 << i);
        if(y) y = 0; else y = 1;
        if(tree[now][y]) now = tree[now][y];
        else now = tree[now][y^1];
    }
    return val[now];
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int s = 0,mx = 0,ans;
        cnt = 0;
        for(int i = 0;i < N;i++) tree[i][0] = tree[i][1] = val[i] = 0;
        update(0);
        for(int i = 0;i < n;i++)
        {
            int x;
            cin >> x;
            s^=x;
            int ret = query(s^k);
            if((ret^s^k)>mx) mx = ret^s^k,ans = ret^s;
            update(s);
        }
        cout << ans << '\n';
    }
}
