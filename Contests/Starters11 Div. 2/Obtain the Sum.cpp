/*
Chef is given two integers N,S.

Consider an array A of size N such that A[i]=i for every 1≤i≤N.

You are required to find any position x(1≤x≤N) such that :

(A[1]+A[2]+...A[x−1])+(A[x+1]+A[x+2]+...A[N])=S
If there are multiple such positions x, print any such position. If there is no such position, print −1.

Input Format:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, two integers N,S.

Output Format:
For each testcase, output the required position or −1 in case there is no such position
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, s;
    cin>>n>>s;
    
    ll res=-1, sum=(n*(n+1))/2;
    if(sum-s<=n && sum-s>=1)
        res=sum-s;
    cout<<res<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}

