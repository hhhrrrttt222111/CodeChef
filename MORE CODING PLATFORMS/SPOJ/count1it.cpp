#include <bits/stdc++.h>
using namespace std;

struct node
{
    int sz,val,prio;
    node *l,*r;
};

using pnode = node*;

int sz(pnode t){ if(!t) return 0; return t->sz; }
void upd(pnode t){ if(!t) return; t->sz = 1+sz(t->l)+sz(t->r); }

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
    else if(it->val>t->val) insert(t->r,it);
    else insert(t->l,it);
    upd(t);
}

void erase(pnode &t,int key)
{
    if(!t) return;
    if(key==t->val){ pnode tmp = t; merge(t,t->l,t->r); free(tmp); }
    else if(key>t->val) erase(t->r,key);
    else erase(t->l,key);
    upd(t);
}

pnode init(int key)
{
    pnode res = new node;
    *res = {1,key,rand(),NULL,NULL};
    return res;
}

int count(pnode t,int x)
{
    if(!t) return 0;
    if(x>=t->val) return sz(t->l)+1+count(t->r,x);
    else return count(t->l,x);
}

int find(pnode t,int x)
{
    if(sz(t->l)+1==x) return t->val;
    else if(sz(t->l)>=x) return find(t->l,x);
    else return find(t->r,x-1-sz(t->l));
}

pnode treap;
int n,q;

int main()
{
    srand(time(NULL));
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> q;
    for(int i = 0;i < n;i++){ int x; cin >> x; insert(treap,init(x)); }
    while(q--)
    {
        int t,x;
        cin >> t >> x;
        if(t==1) insert(treap,init(x+count(treap,x)));
        else if(t==2) cout << count(treap,x) << '\n';
        else
        {
            if(x>sz(treap)) cout << "invalid\n";
            else cout << find(treap,x) << '\n';
        }
    }
}
