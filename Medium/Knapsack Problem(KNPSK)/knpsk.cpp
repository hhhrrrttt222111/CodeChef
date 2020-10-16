#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    vector<ll>O(3),T(3);
    int cap = 0;
    for(int i=0; i<n; i++)
    {
        int w,c;
        cin>>w>>c;
        cap+=w;
        if(w==1)O.push_back(c);
        else T.push_back(c);
    }

    sort(O.rbegin(),O.rend());
    sort(T.rbegin(),T.rend());
    int a = 0, b = 0;
    vector<ll>ats(cap+1);
    ats[1]=O[0];
    a=1;

    for(int i=2; i<=cap; i++)
    if(a<O.size())
    {
        if(b<T.size() && a)
        {
            if(O[a]+O[a-1] >= T[b])
                ats[i]=ats[i-1]+O[a++];
            else
                ats[i]=ats[i-1]-O[a-1]+T[b++],a--;
        }
        else
           ats[i]=ats[i-1]+O[a++];
    }
    else
    ats[i]=ats[i-1]-O[a-1]+T[b++],a--;

    for(int i=1; i<=cap; i++)
        cout<<ats[i]<<(i==cap?"\n":" ");
}
