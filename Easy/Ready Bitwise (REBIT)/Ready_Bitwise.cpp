
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#define ll long long
#define pii pair<int, int>
#define plll pair<pair<ll,ll>, pair<ll,ll> >
#define MAX 105
#define MOD 998244353LL
#define se second
#define fe first
#define pb push_back
#define INF 2 * 1000000000000000000LL
#define rep(i,a,b) for(int i=a; i<b; i++)
#define mp(a,b) make_pair(a, b)
using namespace std;

vector<ll> solve(vector<ll> a, vector<ll> b, char op)
{
    vector<ll> c(4);
    if(op == '&')
    {
        c[1] = (a[1]*b[1])%MOD;
        c[2] = (a[2]*b[1] + a[1]*b[2] + a[2]*b[2])%MOD;
        c[3] = (a[3]*b[1] + a[1]*b[3] + a[3]*b[3])%MOD;
        c[0] = ((((a[0]+a[1]+a[2]+a[3])%MOD)*((b[0] + b[1] + b[2] + b[3])%MOD) - c[1] - c[2] - c[3])%MOD + MOD)%MOD;
    }
    else if(op=='|')
    {
        c[0] = (a[0]*b[0])%MOD;
        c[2] = (a[2]*b[0] + a[0]*b[2] + a[2]*b[2])%MOD;
        c[3] = (a[3]*b[0] + a[0]*b[3] + a[3]*b[3])%MOD;
        c[1] = ((((a[0]+a[1]+a[2]+a[3])%MOD)*((b[0] + b[1] + b[2] + b[3])%MOD) - c[0] - c[2] - c[3])%MOD + MOD)%MOD;

    }
    else if(op=='^')
    {
        c[0] = (a[0]*b[0] + a[1]*b[1] + a[2]*b[2] + a[3]*b[3])%MOD;
        c[1] = (a[0]*b[1] + a[1]*b[0] + a[2]*b[3] + a[3]*b[2])%MOD;
        c[2] = (a[0]*b[2] + a[2]*b[0] + a[1]*b[3] + a[3]*b[1])%MOD;
        c[3] = (a[0]*b[3] + a[3]*b[0] + a[1]*b[2] + a[2]*b[1])%MOD;
    }

    return c;
}

ll fastexp(ll a, ll b)
{
    ll ans = 1;
    while(b)
    {
        if(b & 1)ans = (ans * a)%MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0;
        stack<vector<ll> > st;
        stack<char> cst;

        rep(i,0,s.size())
        {
            if(s[i]==')')
            {
               cst.pop();
               char op = cst.top();
               cst.pop();
               cst.pop();

               vector<ll> a = st.top();
               st.pop();
               vector<ll> b = st.top();
               st.pop();
               vector<ll> c = solve(a, b, op);
               st.push(c);
               cst.push('#');
            }
            else if(s[i]=='#')
            {
                vector<ll> temp(4,1);
                st.push(temp);
                cnt++;
            }

            if(s[i]!='(' && s[i]!=')')cst.push(s[i]);

        }
        vector<ll> ans = st.top();
        st.pop();

        rep(i,0,ans.size())
        {
            ll res = (ans[i] * fastexp(4, cnt*(MOD-2)))%MOD;
            if(i==ans.size()-1)cout<<res<<'\n';
            else cout<<res<<' ';
        }

    }

    return 0;
}
