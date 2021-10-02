#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 1;

int n,q;
struct node
{
    int left,right,val;
}tree[N];
int root[N],res[N],cnt,lst[N];

int clone(int idx){ tree[++cnt] = tree[idx]; return cnt; }

void build(int l,int r,int idx)
{
    cnt = max(cnt,idx);
    if(l==r) return;
    int m = (l+r)/2;
    tree[idx].left = idx*2,tree[idx].right = idx*2+1;
    build(l,m,idx*2),build(m+1,r,idx*2+1);
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

    cin >> n;
    for(int i = 1;i <= n;i++) cin >> res[i];
    build(1,n,1);
    root[0] = 1;
    for(int i = 1;i <= n;i++) 
    {
        root[i*2-1] = update(1,n,root[i*2-2],i,1);
        if(lst[res[i]]) root[i*2] = update(1,n,root[i*2-1],lst[res[i]],-1);
        else root[i*2] = clone(root[i*2-1]);
        lst[res[i]] = i;
    }
    cin >> q;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << read(1,n,root[r*2],l,r) << '\n';
    }
}
