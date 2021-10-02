#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;

int t,n,cnt;
int tree[N][10],res[N];
bool ok;
vector<string> tmp;

void add(string s)
{
    int cur = 0;
    for(char c : s)
    {
        if(tree[cur][c-'0']==0) tree[cur][c-'0'] = ++cnt,cur = cnt;
        else 
        {
            cur = tree[cur][c-'0'];
            if(res[cur]) ok = false;  
        }
    }
    res[cur] = 1;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> t;
    while(t--)
    {
        cin >> n;
        ok = true,cnt = 0;
        tmp.clear();
        for(int i = 0;i < N;i++) for(int j = 0;j < 10;j++) tree[i][j] = 0;
        for(int i = 0;i < N;i++) res[i] = 0;
        for(int i = 0;i < n;i++){ string s; cin >> s; tmp.push_back(s); }
        sort(tmp.begin(),tmp.end());
        for(string s : tmp) add(s);
        if(!ok) cout << "NO";
        else cout << "YES";
        cout << "\n";
    }
}
