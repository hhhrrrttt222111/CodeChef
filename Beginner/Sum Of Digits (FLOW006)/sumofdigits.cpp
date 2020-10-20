#include <iostream>
using namespace std;
int main()
{
    int t,n,total,m;
    cin>>t;
    
    while(t--)
    {
        total=0;
        cin>>n;
        while(n>0)
        {
            m=n%10;
            total=total+m;
            n=n/10;
        }
        cout<<total<<endl;
    }
return 0;
}