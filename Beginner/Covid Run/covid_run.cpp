#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int T;
    cin>>T;

    while (T--)
    {
        int N,K,X,Y;
        cin>>N>>K>>X>>Y;
        bool ans=false;

        for(int i=X ; i<=N ; i)
        {
            if(i==Y)
            {
                ans=true;
                break;
            }
            i=(i+K)%N;
            if (i==X)
            {
                ans=false;
                break;
            }            
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            
    }

    return 0;
}