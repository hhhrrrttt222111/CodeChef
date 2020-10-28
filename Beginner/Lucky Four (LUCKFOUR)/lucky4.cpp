#include<iostream>
using namespace std;
int main()
{
    long long int t,n,f=0;
    cin>>t;
    while(t--)
    {
        cin>>n;  f=0;
        while(n)
        {
            if(n%10==4)
            f++;
            n/=10;
        }
        cout<<f<<endl;
      
    }
}