#include <bits/stdc++.h>
using namespace std;

const int N = 1 << 17;

struct node
{
    int val,left,right;
}tree[N*100];
int n,q,res[N],root[N],cnt,ver;

int clone(int x){ tree[++cnt] = tree[x]; return cnt; }

void build(int l,int r,int idx)
{
    cnt = max(cnt,idx);
    if(l==r){ tree[idx] = {res[l],0,0}; return; }
    int m = (l+r)/2;
    build(l,m,idx*2),build(m+1,r,idx*2+1);
    tree[idx].left = idx*2,tree[idx].right = idx*2+1; 
    tree[idx].val = tree[idx*2].val+tree[idx*2+1].val;
}

int update(int l,int r,int idx,int x,int k)
{
    int now = clone(idx);
    if(l==r){ tree[now].val+=k; return now; }
    int m = (l+r)/2;
    if(x<=m) tree[now].left = update(l,m,tree[idx].left,x,k);
    else tree[now].right = update(m+1,r,tree[idx].right,x,k);
    tree[now].val = tree[tree[now].left].val+tree[tree[now].right].val;
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
    cin >> q;
    while(q--)
    {
        int t;
        cin >> t;
        if(t==1)
        {
            int id,pos,k;
            cin >> id >> pos >> k;
            root[++ver] = update(1,n,root[id],pos,k);
        }
        else
        {
            int id,l,r;
            cin >> id >> l >> r;
            cout << read(1,n,root[id],l,r) << '\n';
        }
    }
}