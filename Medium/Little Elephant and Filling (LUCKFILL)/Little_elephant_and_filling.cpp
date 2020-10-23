#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
using namespace std;
vector <pair<long long, pair<int, int> > >v;
map <long long, int> m;
const int K=50;
int nv;
int count_s(long long s, int n){
    m.clear();
    for(int i=0; i<n; i++){
        long long mask = 0;
        for(int j=i; j<n; j++){
            mask |= (1ll<<j);
            m[((long long)(j-i)<<K)+((s&mask)>>i)] = 1;
        }
    }
    return m.size();
}
void fill_v(){
    v.push_back({0, {0, K+1}});
    for(unsigned i=0; i<v.size(); i++){
        int cate = count_s(v[i].first<<1, v[i].second.first+1);
        if(cate<=K) v.push_back({v[i].first<<1, {v[i].second.first+1, cate}});
        cate = count_s((v[i].first<<1)+1, v[i].second.first+1);
        if(cate<=K) v.push_back({(v[i].first<<1)+1, {v[i].second.first+1, cate}});
    }
}
int main()
{
    //freopen("date.in", "r", stdin);
    //freopen("date.out", "w", stdout);
    fill_v();

    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        char s[55];
        scanf("%d%d\n%s", &n, &k, s+1);
        long long mask = 0, val=0;
        for(int i=0; i<n; i++){
            if(s[n-i]!='?') mask |= (1ll<<i);
            if(s[n-i]=='7') val |= (1ll<<i);
        }
        int res=0;
        for(unsigned i=1; i<v.size(); i++){
            long long s = v[i].first;
            int lg = v[i].second.first;
            int subs = v[i].second.second;
            if(lg==n and subs<=k and (s&mask)==(val&mask))
                res++;
        }
        cout<<res<<'\n';
    }
    return 0;
}

