#include <bits/stdc++.h>
using namespace std;

struct node
{
    int sz,prio;
    long long val,num,sum;
    node *l,*r;
};

using pnode = node*;

int sz(pnode t){ if(!t) return 0; else return t->sz; }
long long sum(pnode t){ if(!t) return 0; else return t->sum; }
void updsz(pnode t){ if(!t) return; t->sz = 1+sz(t->l)+sz(t->r),t->sum = t->num+sum(t->l)+sum(t->r); }

void split(pnode t,pnode &l,pnode &r,long long key)
{
    if(!t) l = r = NULL;
    else if(key>t->val) split(t->r,t->r,r,key),l = t;
    else split(t->l,l,t->l,key),r = t;
    updsz(t);
}

void insert(pnode &t,pnode it)
{
    if(!t) t = it;
    else if(it->prio>t->prio) split(t,it->l,it->r,it->val),t = it;
    else
    {
        if(it->val>t->val) insert(t->r,it);
        else insert(t->l,it);
    }
    updsz(t);
}

pnode init(long long key,long long num)
{
    pnode ret = new node;
    *ret = {1,rand(),key,num,num,NULL,NULL};
    return ret;
}

long long calsum(pnode t,long long key)
{
    if(!t) return 0;
    if(t->val>key) return calsum(t->l,key);
    else return sum(t->l)+t->num+calsum(t->r,key);
}

int q;
long long l;
pnode treap;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> q;
    while(q--)
    {
        long long x,y;
        cin >> x >> y;
        x^=l,y^=l;
        l = calsum(treap,x)+y;
        insert(treap,init(x,y));
        cout << x << ' ' << l << '\n';
    }
}
