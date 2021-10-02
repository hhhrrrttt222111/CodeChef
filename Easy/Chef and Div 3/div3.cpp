#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t; //no. of time he want to check
    while(t>=1)
    {
        int n,k,d,s=0;
        cin>>n>>k>>d;  // setters / problem / days
        int a; 
        for(int i=0;i<n;i++)
        {
            cin>>a;
            s+=a;
        }
        s=s/k;
        if(s>=d)
        cout<<d<<"\n";
        else
        cout<<s<<"\n";
        t--;
    }
}