#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    double n,x,y,a,b,total;
    double tip,tax;
    cin>>n;
    cin>>tip>>tax;
    x=tip/100;
    y=tax/100;
    a=n*x;
    b=n*y;
    total=n+a+b;
    cout<<round(total);
    return 0;
}
