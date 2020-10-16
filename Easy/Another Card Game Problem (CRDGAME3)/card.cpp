#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c,r;
        cin>>c>>r;
       
        int n1=ceil(float(c)/float(9));           //number of digits in chef's integer
        int n2=ceil(float(r)/float(9));           //number of digits in rick's integer
        if(n1<n2)
        cout<<"0"<<" "<<n1;
        else if(n1>=n2)
        cout<<"1"<<" "<<n2;
        cout<<"\n";
    }
}
