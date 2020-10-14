#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        set<int> ans;

        for(int i=0 ; i<n ; i++)
        {
            int num;
            cin>>num;
            if(num > 0)
                ans.insert(num);
        }
        cout<<ans.size()<<endl;
    }
    return 0;
}