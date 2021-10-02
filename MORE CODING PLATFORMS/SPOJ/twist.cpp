#include <bits/stdc++.h>
using namespace std;

struct node
{
    int sz,val,prio;
    bool rev;
    node *l,*r;
};

using pnode = node*;

int sz(pnode t){ if(!t) return 0; return t->sz; }
void upd(pnode t){ if(!t) return; t->sz = sz(t->l)+sz(t->r)+1; }

void push(pnode t)
{
    if(!t or !t->rev) return;
    swap(t->l,t->r);
    t->rev = false;
    if(t->l) t->l->rev^=true;
    if(t->r) t->r->rev^=true;
    upd(t);
}

void split(pnode t,pnode &l,pnode &r,int key) // there's "key" blocks assigning to l
{
    if(!t) return void(l = r = NULL);
    push(t);
    if(key<=sz(t->l)) split(t->l,l,t->l,key),r = t;
    else split(t->r,t->r,r,key-1-sz(t->l)),l = t;
    upd(t);
}

void merge(pnode &t,pnode l,pnode r)
{
    if(!l) return void(t = r);
    if(!r) return void(t = l);
    push(l),push(r);
    if(l->prio>r->prio) merge(l->r,l->r,r),t = l;
    else merge(r->l,l,r->l),t = r;
    upd(t);
}

void insert(pnode &t,pnode it,int idx)
{
    pnode t1,t2;
    split(t,t1,t2,idx-1); // idx-1 indicates number of block before the insertion
    merge(t1,t1,it);
    merge(t,t1,t2);
    upd(t);
}

void erase(pnode &t,int idx)
{
    pnode t1,t2,t3;
    split(t,t1,t2,idx-1); // idx-1 indicates number of block before the deletion 
    split(t2,t3,t2,1); 
    merge(t,t1,t2);
    upd(t);
}

pnode init(int val)
{
    pnode res = new node;
    *res = {1,val,rand(),false,NULL,NULL};
    return res;
}

void print(pnode t)
{
    if(!t) return;
    push(t);
    print(t->l);
    cout << t->val << ' ';
    print(t->r);
}

void reverse(pnode &t,int x,int y)
{
    pnode t1,t2,t3;
    split(t,t1,t2,x-1);
    split(t2,t2,t3,y-x+1);
    t2->rev^=true;
    merge(t,t1,t2);
    merge(t,t,t3);
    upd(t);
}

pnode treap;
int n,q;

int main()
{
    srand(time(NULL));
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> q;
    for(int i = 1;i <= n;i++) insert(treap,init(i),i);
    while(q--)
    {
        int x,y;
        cin >> x >> y;
        reverse(treap,x,y);
    }
    print(treap);
}
