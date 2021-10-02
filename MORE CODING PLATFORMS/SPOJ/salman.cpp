#include <bits/stdc++.h>
using namespace std;

const long long N = 1 << 19;

long long t,n,q;
vector<long long> adj[N];
long long res[N],l[N],r[N];
vector<long long> s;

struct node
{
    long long mn,sum;
    friend node operator+(const node &a,const node &b)
    {
        node ret;
        ret.mn = min(a.mn,b.mn);
        ret.sum = a.sum+b.sum;
        return ret;
    }
}tree[N << 1LL];
long long lazy[N << 1LL];

void dfs(long long u)
{
    s.push_back(u);
    for(long long v : adj[u]) dfs(v);
    s.push_back(u);
}

void pushlz(long long l,long long r,long long idx)
{
    if(!lazy[idx]) return;
    tree[idx].sum+=lazy[idx]*(r-l+1LL);
    tree[idx].mn+=lazy[idx];
    if(l!=r) lazy[idx*2LL]+=lazy[idx],lazy[idx*2LL+1LL]+=lazy[idx];
    lazy[idx] = 0LL;
}

void build(long long l,long long r,long long idx)
{
    lazy[idx] = 0;
    if(l==r){ tree[idx].sum = tree[idx].mn = res[s[l]]; return; }
    long long m = (l+r)/2LL;
    build(l,m,idx*2LL),build(m+1LL,r,idx*2LL+1LL);
    tree[idx] = tree[idx*2LL]+tree[idx*2LL+1LL];
}

void update(long long l,long long r,long long idx,long long x,long long y,long long k)
{
    pushlz(l,r,idx);
    if(x>r or y<l) return;
    if(x<=l and y>=r)
    {
        lazy[idx]+=k;
        pushlz(l,r,idx);
        return;
    }
    long long m = (l+r)/2LL;
    update(l,m,idx*2LL,x,y,k),update(m+1LL,r,idx*2LL+1LL,x,y,k);
    tree[idx] = tree[idx*2LL]+tree[idx*2LL+1LL];
}

node read(long long l,long long r,long long idx,long long x,long long y)
{
    pushlz(l,r,idx);
    if(x>r or y<l){ node ret = {LLONG_MAX,0LL}; return ret; }
    if(x<=l and y>=r) return tree[idx];
    long long m = (l+r)/2LL;
    return read(l,m,idx*2LL,x,y)+read(m+1LL,r,idx*2LL+1LL,x,y);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> t;

    for(long long c = 0LL;c < t;c++)
    {
        cin >> n >> q;
        for(long long i = 1LL;i <= n;i++) adj[i].clear();
        for(long long i = 1LL;i <= n;i++)
        {
            long long pa,x;
            cin >> pa >> x;
            if(pa) adj[pa].push_back(i);
            res[i] = x;
        }
        s.clear();
        dfs(1LL);
        for(long long i = 1LL;i <= n;i++) l[i] = -1LL;
        for(long long i = 0;i < s.size();i++){ if(l[s[i]]==-1LL) l[s[i]] = i; r[s[i]] = i; }
        build(0LL,s.size()-1LL,1LL);
        cout << "Case " << c+1LL << ":\n";
        while(q--)
        {
            long long t,x;
            cin >> t >> x;
            if(t==1LL) cout << read(0LL,s.size()-1LL,1LL,l[x],r[x]).sum/2LL << '\n';
            else 
            {
                long long mn = read(0LL,s.size()-1LL,1LL,l[x],r[x]).mn;
                mn = min(mn,1000LL);
                update(0LL,s.size()-1LL,1LL,l[x],r[x],mn);
            }
        }
    }
}
