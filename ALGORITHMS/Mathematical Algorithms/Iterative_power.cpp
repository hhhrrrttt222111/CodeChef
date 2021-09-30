#include <bits/stdc++.h>
#define ll long long
using namespace std;
double power(int x,int n)
{
    ll temp=x;
    double ans=1;
    while(n!=0)
    {
        if(n%2!=0)
        {
            ans=ans*temp;
        }
        temp=temp*temp;
        n=n/2;
    }
    return ans;
}
int main()
{
    int x,n;
    cin >> x>>n;
    cout<<power(x,n)<<endl;
    return 0;
} 