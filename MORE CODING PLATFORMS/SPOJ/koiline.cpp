#include <bits/stdc++.h>
using namespace std;

struct node
{
    int sz,val,prio;
    node *l,*r;
};

using pnode = node*;

int sz(pnode t){ if(!t) return 0; return t->sz; }
void upd(pnode t){ if(!t) return; t->sz = sz(t->l)+sz(t->r)+1; }

void split(pnode t,pnode &l,pnode &r,int key)
{
    if(!t) return void(l = r = NULL);
    if(t->val>key) split(t->l,l,t->l,key),r = t;
    else split(t->r,t->r,r,key),l = t;
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
    else if(it->val>t->val) insert(t->r,it);
    else insert(t->l,it);
    upd(t);
}

void erase(pnode &t,int x)
{
    if(!t) return;
    if(t->val==x){ merge(t,t->l,t->r); return; }
    if(x>t->val) erase(t->r,x);
    else erase(t->l,x);
    upd(t);
}

pnode init(int val)
{
    pnode res = new node;
    *res = {1,val,rand(),NULL,NULL};
    return res;
}

int find(pnode t,int k)
{
    if(sz(t->l)==k) return t->val;
    else if(k<sz(t->l)+1) return find(t->l,k);
    else return find(t->r,k-1-sz(t->l));
}

int n;
pnode treap;
stack<int> st,ans;

int main()
{
    srand(time(NULL));
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 0;i < n;i++){ int x; cin >> x; insert(treap,init(x)); }
    for(int i = 0;i < n;i++){ int x; cin >> x; st.push(x); }
    while(!st.empty()){ int x = st.top(); st.pop(); ans.push(find(treap,x)); erase(treap,ans.top()); }
    while(!ans.empty()){ cout << ans.top() << '\n'; ans.pop(); }
}
