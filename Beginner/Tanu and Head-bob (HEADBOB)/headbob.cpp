#include <iostream>
using namespace std;
int main()
{
    string s;
    int t,i,l;
    cin>>t;
   while(t--)
   {cin>>l;
       cin>>s;
       
       for(i=0;i<l;i++)
       {
       if(s.at(i)=='I')
       {cout<<"INDIAN"<<endl;break;}
       if(s.at(i)=='Y')
       {cout<<"NOT INDIAN"<<endl;break;}
       
       }
       if(i>=l)
       cout<<"NOT SURE"<<endl;
       
   }
}