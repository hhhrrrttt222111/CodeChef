#include <bits/stdc++.h>
using namespace std;

const int N = 5e4 + 1;

int n,q;
int s[N];
struct node
{
    int pre,suf,sum,all;
    friend node operator+(const node &a,const node &b)
    {
        node ret;
        ret.pre = max(a.pre,a.sum+b.pre);
        ret.suf = max(b.suf,b.sum+a.suf);
        ret.sum = a.sum+b.sum;
        ret.all = max(max(a.all,b.all),a.suf+b.pre);
        return ret;
    }
}tree[N << 2];

void build(int l,int r,int idx)
{
    if(l==r){ tree[idx] = {s[l],s[l],s[l],s[l]}; return; }
    int m = (l+r)/2;
    build(l,m,idx*2),build(m+1,r,idx*2+1);
    tree[idx] = tree[idx*2]+tree[idx*2+1];
}

node read(int l,int r,int idx,int x,int y)
{
    if(x<=l and y>=r) return tree[idx];
    int m = (l+r)/2;
    if(y<=m) return read(l,m,idx*2,x,y);
    else if(x>m) return read(m+1,r,idx*2+1,x,y);
    else return read(l,m,idx*2,x,y)+read(m+1,r,idx*2+1,x,y);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 1;i <= n;i++) cin >> s[i];
    build(1,n,1);
    cin >> q;
    while(q--)
    {
        int l,r;
        cin >> l >> r; 
        cout << read(1,n,1,l,r).all << '\n';
    }
}
