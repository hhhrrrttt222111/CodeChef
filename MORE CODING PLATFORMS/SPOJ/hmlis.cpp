#include <bits/stdc++.h>
using namespace std;

const int N = 1 << 17;
const int MOD = 1e9 + 7;

int n;
int a[N];
vector<int> s;
unordered_map<int,int> ma;
struct node
{
    int mx,am;
    friend node operator+(const node &a,const node &b)
    {
        node ret;
        if(a.mx==b.mx) ret.mx = a.mx,ret.am = (a.am+b.am)%MOD;
        else if(a.mx>b.mx) ret = a;
        else ret = b;
        return ret;
    }
};
node tree[N << 1];

void update(int l,int r,int idx,int x,int mx,int am)
{
    if(x<l or x>r) return;
    if(l==r)
    {
        if(tree[idx].mx==mx) tree[idx].am = (tree[idx].am+am)%MOD;
        else tree[idx].mx = mx,tree[idx].am = am;
        return;
    }
    int m = (l+r)/2;
    update(l,m,idx*2,x,mx,am),update(m+1,r,idx*2+1,x,mx,am);
    tree[idx] = tree[idx*2]+tree[idx*2+1];
}

node read(int l,int r,int idx,int x,int y)
{
    if(x>r or y<l) return {0,0};
    if(x<=l and y>=r) return tree[idx];
    int m = (l+r)/2;
    return read(l,m,idx*2,x,y)+read(m+1,r,idx*2+1,x,y);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 1;i <= n;i++) cin >> a[i],s.push_back(a[i]);
    sort(s.begin(),s.end());
    int id = 1;
    for(int x : s) ma[x] = id++;
    for(int i = 1;i <= n;i++)
    {
        a[i] = ma[a[i]];
        node tmp = read(1,n,1,1,a[i]-1);
        if(tmp.mx==0) tmp.am = 1;
        update(1,n,1,a[i],tmp.mx+1,tmp.am);
    }
    node ans = read(1,n,1,1,n);
    cout << ans.mx << ' '  << ans.am;
}
