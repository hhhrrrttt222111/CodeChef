#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 1;
const int K = 710;

int n,q;
int s[N];
vector<int> res[K],tmp;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 1;i <= n;i++) cin >> s[i],res[i/K].push_back(s[i]);
    for(int i = 0;i < K;i++) sort(res[i].begin(),res[i].end());
    cin >> q;
    while(q--)
    {
        int t;
        cin >> t;
        if(!t) 
        {
            int a,b,c;
            cin >> a >> b >> c;
            int x = a/K,y = b/K;
            int ans = 0;
            for(int i = x+1;i < y;i++)
            {
                auto it = lower_bound(res[i].begin(),res[i].end(),c);
                ans+=(int)(res[i].end()-it);
            }
            for(int i = a;i <= (x+1)*K-1;i++)
            {
                if(i>b) continue;
                if(s[i]>=c) ans++;
            }
            for(int i = b;i >= y*K;i--)
            {
                if(i<a) continue;
                if(s[i]>=c) ans++;
            }
            if(x==y) ans/=2;
            cout << ans << '\n';
        }
        else
        {
            int a,b;
            cin >> a >> b;
            int x = a/K;
            tmp.clear();
            for(int i : res[x]) if(i!=s[a]) tmp.push_back(i); else s[a] = -1;
            res[x].clear();
            for(int i : tmp) res[x].push_back(i);
            res[x].push_back(b);
            sort(res[x].begin(),res[x].end());
            s[a] = b;
        }
    }
}
