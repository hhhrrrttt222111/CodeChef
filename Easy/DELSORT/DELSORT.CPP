#include <bits/stdc++.h>
using namespace std;
set<int>s;
map<int,int>l,r,co;
int trouble;
#define int long long
void remove1(int x)
{
    if(co[x]==0)
    {
    s.erase(x);
    int l1=-1, r1=-1;
    auto t1=s.lower_bound(x);
    if(t1!=s.end())
    {
        r1=*t1;
    }
    if(t1!=s.begin())
    {
        t1--;
        l1=*t1;
    }
    if(l1!=-1&&r[l1]>l[x])
    {
        trouble--;
    }
    if(r1!=-1&&r[x]>l[r1])
    {
        trouble--;
    }
    if(l1!=-1&&r1!=-1&&r[l1]>l[r1])
    {
        trouble=trouble+1;
    }

    }
    co[x]++;
}
void add(int x)
{
    co[x]--;
    if(co[x]==0)
    {

    int l1=-1, r1=-1;
    auto t1=s.lower_bound(x);
    if(t1!=s.end())
    {
        r1=*t1;
    }
    if(t1!=s.begin())
    {
        t1--;
        l1=*t1;
    }
    if(l1!=-1&&r[l1]>l[x])
    {
        trouble++;
    }
    if(r1!=-1&&r[x]>l[r1])
    {
        trouble++;
    }
    if(l1!=-1&&r1!=-1&&r[l1]>l[r1])
    {
        trouble=trouble-1;
    }
    s.insert(x);
    }
}
void solve()
{
     int n;
        cin>>n;
        int a[n];
        s.clear();
        l.clear();
        r.clear();
        co.clear();
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
            if(!l.count(a[i]))
            {
                l[a[i]]=i;
            }
            r[a[i]]=i;
        }
        trouble=0;
        for(auto j=s.begin();j!=s.end();j++)
        {
            if(j!=s.begin())
            {
                int right=*j;
                j--;
                int left=*j;
                j++;
                if(r[left]>l[right])
                {
                    trouble=trouble+1;
                }
            }
        }
        if(trouble==0)
        {
            int tx=(n*(n+1))/2;
            cout<<tx<<"\n";
            return;

        }
        

        int r=0;
        int ans=0;
        for(int y=0;y<n;y++)
        {
            while(trouble>0&&r<n)
            {
                remove1(a[r]);
                r++;
            }
            if(trouble==0)
            {
                ans=ans+n+1-r;
            }
            add(a[y]);
        }

        cout<<ans<<"\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}
