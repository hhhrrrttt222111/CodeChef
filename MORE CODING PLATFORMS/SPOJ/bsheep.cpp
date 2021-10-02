#include <bits/stdc++.h>
using namespace std;

int t,n;
struct pt{ double x,y; };
vector<pt> s,up,dn;
pt a,b;
map<pair<double,double>,int> hsh;

bool cmp(pt a,pt b){ if(a.x!=b.x) return a.x<b.x; else return a.y<b.y; }

bool cw(pt a,pt b,pt c){ return a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y)<0; }

bool ccw(pt a,pt b,pt c){ return a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y)>0; }

double dist(pt a,pt b){ return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)); }

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> t;
    while(t--)
    {
        cin >> n;
        s.clear();
        hsh.clear();
        up.clear();
        dn.clear();
        for(int i = 0;i < n;i++){ double a,b; cin >> a >> b; s.push_back({a,b}); if(!hsh[{a,b}]) hsh[{a,b}] = i+1; }
        sort(s.begin(),s.end(),cmp);
        a = s[0],b = s[s.size()-1];
        up.push_back(a),dn.push_back(a);
        for(int i = 1;i < s.size();i++)
        {
            if(i==s.size()-1 or cw(a,s[i],b)) // upper part
            {
                while(up.size()>=2 and !cw(up[up.size()-2],up[up.size()-1],s[i])) up.pop_back();
                up.push_back(s[i]);
            }
            if(i==s.size()-1 or ccw(a,s[i],b)) // lower part
            {
                while(dn.size()>=2 and !ccw(dn[dn.size()-2],dn[dn.size()-1],s[i])) dn.pop_back();
                dn.push_back(s[i]);
            }
        }
        s.clear();
        for(int i = 0;i < dn.size();i++) s.push_back(dn[i]);
        for(int i = up.size()-2;i > 0;i--) s.push_back(up[i]);
        double mn = INT_MAX,mnn = INT_MAX;
        int id;
        double ans = 0;
        for(int i = 0;i < s.size()-1;i++) ans+=dist(s[i],s[i+1]);
        ans+=dist(s[0],s.back());
        cout << fixed;
        cout << setprecision(2) << ans << '\n';
        for(int i = 0;i < s.size();i++) if(s[i].y<mn or (s[i].y==mn and s[i].x<mnn)) id = i,mn = s[i].y,mnn = s[i].x;
        for(int i = id;i < s.size();i++) cout << hsh[{s[i].x,s[i].y}] << ' ';
        for(int i = 0;i < id;i++) cout << hsh[{s[i].x,s[i].y}] << ' ';
        cout << "\n\n";
    }
}
