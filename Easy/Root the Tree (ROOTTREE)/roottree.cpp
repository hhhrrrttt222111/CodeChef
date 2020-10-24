#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> vm;
        for(int i=0;i<n-1;i++)
        {
            int u,v;
            cin>>u>>v;
            vm[v]++;
        }
        int count=0;
        for(auto x:vm)
        {
            if(x.second>1)
                count+=(x.second-1);
        }
        cout<<count<<"\n";
        
    }
    return 0;
}