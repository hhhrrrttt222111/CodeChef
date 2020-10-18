#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include<sstream>
#include <vector>
#include <cmath>
#include <set>
#include <map>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a)  a.begin(),a.end()
#define ESP (1e-9)
#define N 1000005
#define inf 1000000007
#define sz(a) int(a.size())
#define pii pair<int,int>
#define vi vector<int>
#define pi acos(-1)
int f[1<<15],a[1<<15];
int main()
{
   // freopen("in.txt","r",stdin);
    int T,i,j,k,x,y,m,n,t;
    scanf("%d",&T);
    while(T--)
    {
     scanf("%d%d%d",&n,&x,&y);
     t=x^y;
     if(n==1||(n==2&&(t==1||t==2))){puts("-1");continue;}
     int tmp=0,len=(1<<n);
     for(i=0;i<n;i++)f[1<<i]=i;
     for(i=1;i<(1<<n);i++)
     if(i&1)
     {a[i-1]=0;tmp^=1;}
     else
     {
      int bit=tmp^(tmp&(tmp-1));
      a[i-1]=f[bit]+1;
      tmp^=(bit<<1);
     }
	 a[len-1]=f[tmp];
	 if(!(t&(t-1)))
	 {
	  int bad=f[t];
	  if(a[0]==bad||a[len-1]==bad)
	  {
	   int nxt=0;
	   while(a[len-1]==nxt||a[0]==nxt)nxt++;
	   for(i=0;i<len;i++)
	   if(a[i]==bad)a[i]=nxt;
	   else if(a[i]==nxt)a[i]=bad;
	  }
	 }
	 tmp=x;
	 for(i=0;i<len;i++)
	 {
	  printf("%d ",tmp);
	  tmp^=(1<<a[i]);
	 }
	 puts("");
	}
    return 0;
}
 