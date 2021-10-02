#include <bits/stdc++.h>
using namespace std;

const int N = 5e4 + 1;

int n;
vector<long long> m,b;
pair<long long,long long> a[N];
long long ldp,dp[N];
bool out[N];

bool bad(int l1,int l2,int l3)
{
    return (double)(b[l2]-b[l3])*(m[l2]-m[l1])<(double)(b[l1]-b[l2])*(m[l3]-m[l2]);
}

void add(long long mx,long long bx)
{
    m.push_back(mx),b.push_back(bx);
    while(m.size()>2 and bad(m.size()-3,m.size()-2,m.size()-1))
        m.erase(m.end()-2),b.erase(b.end()-2);
}

int ptr;

long long query(long long x)
{
    if(m.empty()) return LLONG_MAX;
    if(ptr>=m.size()) ptr = m.size()-1;
    while(ptr<m.size()-1 and m[ptr+1]*x+b[ptr+1]<=m[ptr]*x+b[ptr]) ptr++;
    return m[ptr]*x+b[ptr];
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 1;i <= n;i++) cin >> a[i].first >> a[i].second;
    sort(a+1,a+n+1);
    long long mx = INT_MIN;
    for(int i = n;i >= 1;i--)
    {
        if(mx>=a[i].second) out[i] = true;
        mx = max(mx,a[i].second);
    }
    for(int i = 1;i <= n;i++) if(!out[i])
    {
        dp[i] = a[i].first*a[i].second+ldp;
        dp[i] = min(dp[i],query(a[i].first));
        add(a[i].second,ldp);
        ldp = dp[i];
    }
    cout << dp[n];
}
