#include <bits/stdc++.h>
using namespace std;

const int N = 1 << 17;

int n,q;
pair<int,int> res[N];
int root[N],cnt;
struct node
{
    int val,left,right;
}tree[N*20];

int clone(int x){ tree[++cnt] = tree[x]; return cnt; }

void build(int l,int r,int idx)
{
    cnt = max(cnt,idx);
    if(l==r) return;
    int m = (l+r)/2;
    build(l,m,idx*2),build(m+1,r,idx*2+1);
    tree[idx].left = idx*2,tree[idx].right = idx*2+1;
}

int update(int l,int r,int idx,int x,int k)
{
    int now = clone(idx);
    tree[now].val+=k;
    if(l==r) return now;
    int m = (l+r)/2;
    if(x<=m) tree[now].left = update(l,m,tree[idx].left,x,k);
    else tree[now].right = update(m+1,r,tree[idx].right,x,k);
    return now;
}

int read(int l,int r,int idx,int x,int y)
{
    if(x>r or y<l) return 0;
    if(x<=l and y>=r) return tree[idx].val;
    int m = (l+r)/2;
    return read(l,m,tree[idx].left,x,y)+read(m+1,r,tree[idx].right,x,y);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> q;
    for(int i = 1;i <= n;i++) cin >> res[i].first,res[i].second = i;
    sort(res+1,res+n+1);
    root[0] = 1;
    build(1,n,1);
    for(int i = 1;i <= n;i++) root[i] = update(1,n,root[i-1],res[i].second,1);
    while(q--)
    {
        int x,y,k;
        cin >> x >> y >> k;
        int l = 1,r = n;
        while(l<r)
        {
            int m = (l+r)/2;
            if(read(1,n,root[m],x,y)>=k) r = m;
            else l = m+1;
        }
        cout << res[r].first << '\n';
    }
}
