#include <iostream>
using namespace std;
int main()
{
    int t,i,max,min;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cin>>b;min=0;max=0;
        for(i=0;;i++)
        {   if(a[i]=='\0')
            break;
            else if(a[i]=='?'||b[i]=='?')
            max++;
            else if(a[i]!=b[i])
            min++;
        }
        cout<<min<<" "<<(max+min)<<endl;
    }
}