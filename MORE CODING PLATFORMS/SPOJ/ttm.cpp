#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;

int n,m;
struct node{ long long val,lazy; int left,right; };
node tree[200*N];
int res[N];
int root[N],cnt,cur;

int clone(int idx){ tree[++cnt] = tree[idx]; return cnt; }

void pushlz(int l,int r,int idx)
{
    if(!tree[idx].lazy) return;
    tree[idx].val+=tree[idx].lazy*(r-l+1);
    if(l!=r)
    {
        int newl = clone(tree[idx].left),newr = clone(tree[idx].right);
        tree[newl].lazy+=tree[idx].lazy,tree[newr].lazy+=tree[idx].lazy;
        tree[idx].left = newl,tree[idx].right = newr;
    }
    tree[idx].lazy = 0;
}

void build(int l,int r,int idx)
{
    cnt = max(cnt,idx);
    if(l==r){ tree[idx].val = res[l]; return; }
    int m = (l+r)/2;
    build(l,m,idx*2),build(m+1,r,idx*2+1);
    tree[idx] = {tree[idx*2].val+tree[idx*2+1].val,0,idx*2,idx*2+1};
}

int update(int l,int r,int idx,int x,int y,int k)
{
    pushlz(l,r,idx);
    if(x>r or y<l) return idx;
    int now = clone(idx);
    if(x<=l and y>=r) 
    {
        tree[now].lazy+=k;
        pushlz(l,r,now);
        return now;
    }
    int m = (l+r)/2;
    tree[now].left = update(l,m,tree[now].left,x,y,k);
    tree[now].right = update(m+1,r,tree[now].right,x,y,k);
    tree[now].val = tree[tree[now].left].val+tree[tree[now].right].val;
    return now;
}

long long read(int l,int r,int idx,int x,int y)
{
    pushlz(l,r,idx);
    if(x>r or y<l) return 0;
    if(x<=l and y>=r) return tree[idx].val;
    int m = (l+r)/2;
    return read(l,m,tree[idx].left,x,y)+read(m+1,r,tree[idx].right,x,y);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> m;
    for(int i = 1;i <= n;i++) cin >> res[i];
    build(1,n,1);
    root[0] = 1;
    while(m--)
    {
        char c;
        cin >> c;
        if(c=='C')
        {
            int l,r,d;
            cin >> l >> r >> d;
            root[cur+1] = update(1,n,root[cur],l,r,d),cur++;
        }
        else if(c=='Q')
        {
            int l,r;
            cin >> l >> r;
            cout << read(1,n,root[cur],l,r) << '\n';
        }
        else if(c=='H')
        {
            int l,r,t;
            cin >> l >> r >> t;
            cout << read(1,n,root[t],l,r) << '\n';
        }
        else 
        {
            int x;
            cin >> x;
            cur = x;
        }
    }
}
