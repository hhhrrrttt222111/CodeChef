#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 1;

int n,q,cnt;
int tree[N][26],res[N];

void add(string s)
{
    int cur = 0;
    for(char c : s)
    {
        if(tree[cur][c-'a']==0) tree[cur][c-'a'] = ++cnt,res[cur = cnt] = 1;
        else cur = tree[cur][c-'a'],res[cur]++;
    }
}

int find(string s)
{
    int cur = 0;
    for(char c : s)
    {
        if(tree[cur][c-'a']==0) return 0;
        cur = tree[cur][c-'a'];
    }
    return res[cur];
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> q;
    for(int i = 0;i < n;i++)
    {
        string s;
        cin >> s;
        add(s);
    }
    while(q--)
    {
        string s;
        cin >> s;
        cout << find(s) << '\n';
    }
}
