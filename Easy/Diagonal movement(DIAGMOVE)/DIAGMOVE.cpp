//Codechef Starters 14
//Problem: Diagonal movement  - DIAGMOVE
//Problem Difficulty - Easy
//Author: Varun
//Codechef Username: varun_25

#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define N 100005
#define MOD 1000000007
#define dd double
#define rev(i,n) for(int i=n-1;i>=0;i--)
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define rev1(i,b) for(int i=b;i>=1;i--)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second


int main() 
{
int t;
cin>>t;
while(t--)
{
   int a,b;
   cin>>a>>b;
   int x = abs(a-b);
   if(x%2==0)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
}

return 0;
}

/*
Input:
        6
        0 2
        1 2
        -1 -3
        -1 0
        -3 1
        2 -1

Output:
        YES
        NO
        YES
        NO
        YES
        NO
*/
