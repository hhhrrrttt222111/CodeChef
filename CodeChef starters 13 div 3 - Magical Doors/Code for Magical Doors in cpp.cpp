#include<iostream>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0;
        if(s[0]=='0')ans=1;
        for(int i=1; i<s.length(); i++)
        {
            if(s[i]!=s[i-1])ans++;
        }
        cout<<ans<<endl;
    }
}
