#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long palindrome(int n)
{
    int rev=0,cpy=n,temp=0;
    while(cpy>0)
    {
        temp=cpy%10;
        rev=rev*10+temp;
        cpy/=10;
    }
    if(rev==n)
    return 1;
    else
    return 0;
}
int main(){
    int n;
    cin>>n;
    cout<<palindrome(n)<<endl;
    return 0;
}