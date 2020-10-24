#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(long long i=0;i<n;i++)
            cin>>v[i];
        int found=1;
        for(long long i=0;i<n;i++)
        {
            if(v[i]<=(i+1)&&((i+1)%v[i]==0))
                continue;
            else
            {
                found=0;
                break;
            }
        }
        if(found)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}