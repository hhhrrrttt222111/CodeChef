#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long digits(int n)
{
    return floor(log10(n)+1);
}
int main(){
    int n;
    cin>>n;
    cout<<digits(n)<<endl;
    return 0;
}