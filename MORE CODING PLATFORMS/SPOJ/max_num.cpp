#include <bits/stdc++.h>
using namespace std;

int t,k;
string s,ans;
deque<pair<int,int> > q;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> t;
    while(t--)
    {
        cin >> s >> k;
        for(int i = 0;i <= k;i++) 
        {
            int x = s[i]-'0';
            while(!q.empty() and q.back().first<x) q.pop_back();
            q.push_back({x,i});
        }
        ans = "";
        for(int i = 0;i < s.length()-k;i++)
        {
            ans+=(char)(q.front().first+'0');
            q.pop_front();
            if(i==s.length()-k-1) break;
            int x = s[k+i+1]-'0';
            while(!q.empty() and q.back().first<x) q.pop_back();
            q.push_back({x,k+i+1});
        }
        while(!q.empty()) q.pop_back();
        cout << ans << '\n';
    }
}
