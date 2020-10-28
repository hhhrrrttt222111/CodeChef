#include <iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
   while(t--)
   {
       cin>>a>>b;
       if(a>b)
       cout<<a<<" "<<(a+b)<<endl;
       else
       cout<<b<<" "<<(a+b)<<endl;
   }
}