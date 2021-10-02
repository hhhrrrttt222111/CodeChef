#include <bits/stdc++.h>
using namespace std;

struct node
{
    int sz,val,prio;
    node *l,*r;
};

using pnode = node*;

int sz(pnode t){ if(!t) return 0; else return t->sz; }
void upd(pnode t){ if(!t) return; t->sz = 1+sz(t->l)+sz(t->r); }

void split(pnode t,pnode &l,pnode &r,int key)
{
    if(!t){ l = r = NULL; return; }
    if(key>=t->val) split(t->r,t->r,r,key),l = t;
    else split(t->l,l,t->l,key),r = t;
    upd(t);
}

void merge(pnode &t,pnode l,pnode r)
{
    if(!l){ t = r; return; }
    if(!r){ t = l; return; }
    if(l->prio>r->prio) merge(l->r,l->r,r),t = l;
    else merge(r->l,l,r->l),t = r;
    upd(t);
}

void insert(pnode &t,pnode it)
{
    if(!t) t = it;
    else if(it->prio>t->prio) split(t,it->l,it->r,it->val),t = it;
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

int count(pnode t,int key)
{
    if(!t) return 0;
    if(key>t->val) return count(t->r,key)+sz(t->l)+1;
    else return count(t->l,key);
}

const int N = 4e5 + 1;

pnode treap[N];
int n,m;
vector<int> res;
vector<pair<int,int> > inp;
vector<tuple<int,int,int> > hsh;

int main()
{
    srand(time(NULL)); 
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> m;
    for(int i = 0;i < n;i++) 
    {
        int x;
        cin >> x;
        res.push_back(x);
        hsh.push_back({x,0,i});
    }
    for(int i = 0;i < m;i++)
    {
        int x,y;
        cin >> x >> y;
        inp.push_back({x,y});
        hsh.push_back({y,1,i});
    }
    int id = 0,lst = -1;
    sort(hsh.begin(),hsh.end());
    for(auto [x,y,z] : hsh){ if(lst!=-1 and x!=lst) id++; if(!y) res[z] = id; else inp[z].second = id; lst = x; }
    for(int i = 0;i < n;i++) insert(treap[res[i]],init(i));
    for(int i = 0;i < m;i++)
    {
        auto [x,y] = inp[i];
        erase(treap[res[x]],x);
        insert(treap[y],init(x));
        res[x] = y;
        cout << count(treap[y],x) << '\n';
    }
}

