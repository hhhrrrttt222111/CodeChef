#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 long long int t,n,j,i,cost=0;

int main() {
    cin>>t;
    for(j=0;j<t;j++){

        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cost=0;
        sort(a,a+n);
        cost=a[0]*(n-1);
        cout<<cost<<endl;
    }
}