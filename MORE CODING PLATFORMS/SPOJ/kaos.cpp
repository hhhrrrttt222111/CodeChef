#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;

int n;
string s[N];
int a[N];
pair<string,int> p[N];
long long ans;

void update(int idx,int val){ while(idx<N) a[idx]+=val,idx+=(idx & -idx); }

int read(int idx){ int val = 0; while(idx>0) val+=a[idx],idx-=(idx & -idx); return val; }

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 1;i <= n;i++) cin >> s[i];
    sort(s+1,s+n+1);
    for(int i = 1;i <= n;i++) p[i] = {s[i],i};
    for(int i = 1;i <= n;i++) reverse(p[i].first.begin(),p[i].first.end());
    sort(p+1,p+n+1);
    for(int i = 1;i <= n;i++)
    {
        int x = p[i].second;
        ans+=(long long)(read(n)-read(x));
        update(x,1);
    }
    cout << ans;
}
