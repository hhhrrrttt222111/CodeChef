#include <bits/stdc++.h>
using namespace std;

const int N = 5e6;

int n,m;
int cnt,tree[N][26];
string ans[N];
int mx[N],en[N];
vector<int> tmp;

void add(string s)
{
    int now = 0;
    for(char c : s)
    {
        if(tree[now][c-'a']) now = tree[now][c-'a'];
        else now = tree[now][c-'a'] = ++cnt;
        tmp.push_back(now);
    }
    en[now]++;
    if(en[now]>=mx[now]) mx[now] = en[now],ans[now] = s;
    for(int i = tmp.size()-2;i >= 0;i--)
    {
        if(mx[tmp[i+1]]>mx[tmp[i]]) mx[tmp[i]] = mx[tmp[i+1]],ans[tmp[i]] = ans[tmp[i+1]];
        else if(mx[tmp[i+1]]==mx[tmp[i]] and ans[tmp[i+1]]<ans[tmp[i]]) ans[tmp[i]] = ans[tmp[i+1]];
    }
    tmp.clear();
}

int query(string s)
{
    int now = 0;
    for(char c : s)
    {
        if(tree[now][c-'a']==0) return -1;
        now = tree[now][c-'a'];
    }
    return now;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        string s;
        cin >> s;
        add(s);
    }
    cin >> m;
    while(m--)
    {
        string s;
        cin >> s;
        int ret = query(s);
        if(ret==-1){ cout << "-1\n"; continue; }
        cout << ans[ret] << ' ' << mx[ret] << '\n';
    }

}
