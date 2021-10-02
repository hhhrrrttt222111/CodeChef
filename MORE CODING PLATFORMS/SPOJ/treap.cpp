#include <bits/stdc++.h>
using namespace std;

struct node
{
    int sz,val,prio,mn,mx,mnd;
    node *l,*r;
};

using pnode = node*;

int sz(pnode t){ if(!t) return 0; return t->sz; }
int mx(pnode t){ if(!t) return INT_MIN; return t->mx; }
int mn(pnode t){ if(!t) return INT_MAX; return t->mn; }
int mnd(pnode t){ if(!t) return INT_MAX; return t->mnd; }

void upd(pnode t)
{ 
    if(!t) return; 
    t->sz = sz(t->l)+sz(t->r)+1;
    t->mn = min(t->val,min(mn(t->l),mn(t->r)));
    t->mx = max(t->val,max(mx(t->l),mx(t->r))); 
    t->mnd = min(mnd(t->l),mnd(t->r));
    if(t->l) t->mnd = min(t->mnd,t->val-mx(t->l));
    if(t->r) t->mnd = min(t->mnd,mn(t->r)-t->val);
}

void split(pnode t,pnode &l,pnode &r,int key)
{
    if(!t) return void(l = r = NULL);
    if(key>=t->val) split(t->r,t->r,r,key),l = t;
    else split(t->l,l,t->l,key),r = t;
    upd(t);
}

void merge(pnode &t,pnode l,pnode r)
{
    if(!l) return void(t = r);
    if(!r) return void(t = l);
    if(l->prio>r->prio) merge(l->r,l->r,r),t = l;
    else merge(r->l,l,r->l),t = r;
    upd(t);
}

void insert(pnode &t,pnode it)
{
    if(!t) return void(t = it);
    if(it->prio>t->prio) split(t,it->l,it->r,it->val),t = it;
    else if (it->val>t->val) insert(t->r,it);
    else insert(t->l,it);
    upd(t);
}

void erase(pnode &t,int val)
{
    if(!t) return;
    if(t->val==val) merge(t,t->l,t->r); 
    else if(val>t->val) erase(t->r,val);
    else erase(t->l,val);
    upd(t);
}

pnode init(int val)
{
    pnode res = new node;
    *res = {1,val,rand(),val,val,INT_MAX,NULL,NULL};
    return res;
}

bool find(pnode t,int val)
{
    if(!t) return false;
    if(val==t->val) return true;
    if(val>t->val) return find(t->r,val);
    else return find(t->l,val); 
}

int kth(pnode t,int val)
{
   // cout << t->val << ' ' << val << endl;
    if(val==sz(t->l)+1) return t->val;
    else if(val>sz(t->l)+1) return kth(t->r,val-sz(t->l)-1);
    else return kth(t->l,val);
}

int mnd(pnode t,int x,int y)
{
    int res = INT_MAX;
    if(x<1) x = 1;
    if(y>sz(t)) y = sz(t);
    if(x<=1 and y>=sz(t)) return t->mnd;
    if(x<=sz(t->l) and y>=sz(t->l)+1) res = min(res,t->val-mx(t->l));
    if(x<=sz(t->l)+1 and y>sz(t->l)+1) res = min(res,mn(t->r)-t->val);
    if(x<sz(t->l)) res = min(res,mnd(t->l,x,y));
    if(y>sz(t->l)+2) res = min(res,mnd(t->r,x-sz(t->l)-1,y-sz(t->l)-1));
    if(res==INT_MAX) while(1);
    return res;
}

void print(pnode t)
{
    if(!t) return;
    cout << t->val  << ' ' << t->mx << ' ' << t->mn << ' ' << t->mnd << endl;
    cout << "left: ";
    if(t->l) cout << t->l->val;
    cout << endl;
    cout << "right: ";
    if(t->r) cout << t->r->val;
    cout << endl;
    print(t->l),print(t->r);
}

pnode treap;
int q;

int main()
{
    srand(time(NULL));
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> q;
    while(q--)
    {
        char c;
        int x,y;
        cin >> c;
        if(c=='I'){ cin >> x; if(!find(treap,x)) insert(treap,init(x)); }
        else if(c=='D'){ cin >> x; erase(treap,x); }
        else if(c=='N')
        {
            cin >> x >> y;
            if(x==y) cout << "-1\n";
            else cout << mnd(treap,x+1,y+1) << '\n';
        }
        else
        {
            cin >> x >> y;
            if(x==y) cout << "-1\n";
            else cout << kth(treap,y+1)-kth(treap,x+1) << '\n';
        }
//    print(treap);
  //  cout << endl;
    }
}

