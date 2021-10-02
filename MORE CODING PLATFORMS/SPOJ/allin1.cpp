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
    if(t->val==key){ pnode tmp = t; merge(t,t->l,t->r); free(tmp); }
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

int getid(pnode t,int key)
{
    if(!t) return 0;
    if(t->val==key) return sz(t->l)+1;
    else if(key>t->val) return getid(t->r,key)+1+sz(t->l);
    else return getid(t->l,key);
}

int getval(pnode t,int key)
{
    if(!t) return 0;
    if(sz(t->l)+1==key) return t->val;
    else if(key<=sz(t->l)) return getval(t->l,key);
    else return getval(t->r,key-1-sz(t->l));
}

pnode treap;

int main()
{
    srand(time(NULL));
    ios_base::sync_with_stdio(0); cin.tie(0);

    while(true)
    {
        int t,x;
        cin >> t;
        if(t==-1) return 0;
        cin >> x;
        if(t==1) insert(treap,init(x));
        else if(t==2) erase(treap,x);
        else if(t==3){ int y = getid(treap,x); if(y and getval(treap,y)==x) cout << y << '\n'; else cout << "-1\n"; }
        else{ if(x and x<=sz(treap)) cout << getval(treap,x) << '\n'; else cout << "-1\n"; }
    }
}
