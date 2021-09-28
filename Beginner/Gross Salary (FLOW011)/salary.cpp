#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    float gross;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int sal;
        cin>>sal;
        if(sal<1500)
        {
        gross=sal*2;
        cout<<fixed<<setprecision(2)<<gross<<endl;
        }
        else
        {
            gross=sal+500+(0.98*sal);
            cout<<fixed<<setprecision(2)<<gross<<endl;
        }
        
    }
}
